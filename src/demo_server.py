import compiler
from http.server import BaseHTTPRequestHandler, HTTPServer
import json
import logging

class Handler(BaseHTTPRequestHandler):
    def _set_response(self, body):
        self.send_response(200)
        self.send_header('Content-type', 'application/json')
        self.send_header('Access-Control-Allow-Origin', '*')
        self.end_headers()
        self.wfile.write(json.dumps(body).encode(encoding='utf_8'))

    def do_POST(self):
        data = {
            'error': 'no error',
            'refs': [],
            'sources': [],
            'configs': [],
            'python_jinja': False
        }

        content_length = int(self.headers['Content-Length']) # <--- Gets the size of data
        post_data = self.rfile.read(content_length) # <--- Gets the data itself
        res = compiler.process_source(compiler.get_parser(), post_data.decode('utf-8'))
        if isinstance(res, compiler.ParseFailure):
            res = data['error'] = f"Parse Error: {res.msg}"
        elif isinstance(res, compiler.TypeCheckFailure):
            res = data['error'] = f"Type Error: {res.msg}"
        else:
            res = compiler.extract(res)
            res = json_friendly(res)
            data['refs'] = res['refs']
            data['configs'] = res['configs']
            data['sources'] = res['sources']

        logging.info(f"\nPOST:     {post_data.decode('utf-8')}\nResponse: {data}\n")

        self._set_response(data)

def run(server_class, handler_class, port):
    logging.basicConfig(level=logging.INFO)
    server_address = ('127.0.0.1', port)
    httpd = server_class(server_address, handler_class)
    logging.info('Starting httpd...\n')
    try:
        httpd.serve_forever()
    except KeyboardInterrupt:
        pass
    httpd.server_close()
    logging.info('Stopping httpd...\n')

def json_friendly(compiler_output):
    data = dict(compiler_output)
    data['sources'] = list(data['sources'])
    return data

if __name__ == '__main__':
    run(HTTPServer, Handler, 8000)