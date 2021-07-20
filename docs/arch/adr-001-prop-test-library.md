# Prop Test Library

## Context
The `Extraction` type forms a monoid which is important because we extract values in parallel and merge these values into one. A monoid is the prefect structure to do this with because of the properties it has: left identity, right identity, and associativity. Practically speaking, this means that these values can be merged together in any order without affecting the result, making it safe to do in parallel.

Previously, the `mappend` function which does the merging was trivial. However, after dbt tracking for the experimental parser showed that tags get merged differently than other config values, `mappend` became very much non-trivial and these properties really needed to be tested, hence the need for a property-based testing library.

## Decision
I ultimately decided to go with the quickcheck library when writing property based tests. I implemented both quickcheck and proptest when making this decision.

### reasons to go with quickcheck
- quickcheck is far more widely used
- quickcheck is more actively maintained than proptest
- library syntax for quickcheck is way more readable
- defining an arbitrary instance is less bloated than in proptest
- running two small tests takes a fraction of a second while proptest takes 20 to 60 seconds

### reasons to go with proptest
- easier to define different generators for the same type
- provides library functions for doing complex tasks, like generating recursive data
- seems to have more documentation
- if we end up doing very complex generation or shrinking this- could prevent some boilerplate

## Status
Quickcheck is now used to test the monoid laws in PR [#29](https://github.com/dbt-labs/dbt-parser-generator/pull/29)

## Consequences
Property-based testing is non-deterministic. Although we get a greater confidence in the assumptions we rely on, we need to treat test failures differently. Property test failures should be codified into unit tests instead of simply being rerun till they pass, because we want to catch these hard-to-find edge cases.