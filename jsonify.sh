#!/bin/bash

# this script takes multiple files that are of the form
# {json}<newline>{json}<newline>...{json}
# and makes them into a single proper json array
# [{json}, {json}, ... {json}]

output=output
echo -n "[" > $output
for f in ./*.json
do
    paste -sd, $f >> $output
    echo -n "," >> $output
done
truncate -s -2 $output
echo "]" >> $output