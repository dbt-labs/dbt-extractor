# Contributing to `dbt-extractor`

`dbt-extractor` processes the most common jinja value templates in dbt model files.


1. [About this document](#about-this-document)
2. [Getting the code](#getting-the-code)
3. [Setting up an environment](#setting-up-an-environment)
4. [Running in development](#running-dbt-extractor-in-development)
5. [Testing](#testing)
6. [Debugging](#debugging)
7. [Adding or modifying a changelog entry](#adding-or-modifying-a-changelog-entry)
8. [Submitting a Pull Request](#submitting-a-pull-request)
9. [Troubleshooting Tips](#troubleshooting-tips)

## About this document

There are many ways to contribute to the ongoing development of `dbt-extractor`, such as by participating in discussions and issues. We encourage you to first read our higher-level document: ["Expectations for Open Source Contributors"](https://docs.getdbt.com/docs/contributing/oss-expectations).

The rest of this document serves as a more granular guide for contributing code changes to `dbt-extractor` (this repository). It is not intended as a guide for using `dbt-extractor`, and some pieces assume a level of familiarity with Rust development. Specific code snippets in this guide assume you are using macOS or Linux and are comfortable with the command line.

### Notes

- **CLA:** Please note that anyone contributing code to `dbt-extractor` must sign the [Contributor License Agreement](https://docs.getdbt.com/docs/contributor-license-agreements). If you are unable to sign the CLA, the `dbt-extractor` maintainers will unfortunately be unable to merge any of your Pull Requests. We welcome you to participate in discussions, open issues, and comment on existing ones.
- **Branches:** All pull requests from community contributors should target the `main` branch (default).
- **Releases**: This repository is not released on a cadence.  Releases occur as needed.

## Getting the code

### Installing git

You will need `git` in order to download and modify the source code.

### External contributors

If you are not a member of the `dbt-labs` GitHub organization, you can contribute to `dbt-extractor` by forking the `dbt-extractor` repository. For a detailed overview on forking, check out the [GitHub docs on forking](https://help.github.com/en/articles/fork-a-repo). In short, you will need to:

1. Fork the `dbt-extractor` repository
2. Clone your fork locally
3. Check out a new branch for your proposed changes
4. Push changes to your fork
5. Open a pull request against `dbt-labs/dbt-extractor` from your forked repository

### dbt Labs contributors

If you are a member of the `dbt-labs` GitHub organization, you will have push access to the `dbt-extractor` repo. Rather than forking `dbt-extractor` to make your changes, just clone the repository, check out a new branch, and push directly to that branch.

## Setting up an environment

TBD

## Running `dbt-extractor` in development

### Installation

TBD

### Running `dbt-extractor`

#### Running The Demo App

To see the full implementation extract dbt values live as you type in a browser, run:
```
make demo
```
It may take a moment for the demo to compile an optimized version of itself.

Kill the server with ctrl+c to end the demo.

## Testing

Once you're able to manually test that your code change is working as expected, it's important to run existing automated tests, as well as adding some new ones. These tests will ensure that:
- Your code changes do not unexpectedly break other established functionality
- Your code changes can handle all known edge cases
- The functionality you're adding will _keep_ working in the future

### Test commands

```
make test
```

## Debugging

TBD

### Assorted development tips

TBD

## Submitting a Pull Request

Code can be merged into the current development branch `main` by opening a pull request. A `dbt-extractor` maintainer will review your PR. They may suggest code revision for style or clarity, or request that you add unit or integration test(s). These are good things! We believe that, with a little bit of help, anyone can contribute high-quality code.

Automated tests run via GitHub Actions. If you're a first-time contributor, all tests (including code checks and unit tests) will require a maintainer to approve. Changes in the `dbt-extractor` repository trigger integration tests against Postgres. dbt Labs also provides CI environments in which to test changes to other adapters, triggered by PRs in those adapters' repositories, as well as periodic maintenance checks of each adapter in concert with the latest `dbt-extractor` code changes.

Once all tests are passing and your PR has been approved, a `dbt-extractor` maintainer will merge your changes into the active development branch. And that's it! Happy developing :tada:

## Troubleshooting Tips
- Sometimes, the content license agreement auto-check bot doesn't find a user's entry in its roster. If you need to force a rerun, add `@cla-bot check` in a comment on the pull request.
