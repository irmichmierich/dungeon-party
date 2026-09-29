# DR-001: Programming Language

**Date:** 2026-09-29
**Status:** proposed
**Decided by:** Team 1

## Context

The game needs a real-time client loop (rendering, input), a server that validates every action, a bot client, and a test harness. The supervisor teaches C++. Several team members have C++ experience, and one has built a game in C++ before.

## Options considered

| Option | Pros | Cons |
|---|---|---|
| C++20 | Team experience; well suited for game loops; supervisor's language; good libraries (Raylib/SFML, ENet, GoogleTest) | Manual memory management, slower build setup, networking needs a library |
| Java | JUnit is named in the course plan; built-in networking and database access | Less team experience with games; weaker fit for real-time rendering |

## Decision

C++20 for all modules. GoogleTest replaces JUnit for unit tests.

## Consequences

- Build system: CMake, dependencies fetched with `FetchContent`.
- We state in the architecture notebook that GoogleTest is our equivalent of JUnit.
