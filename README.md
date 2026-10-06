# Dungeons & Dragons

Software Project WS 2026/27, Team 1 (Topic 1: Real-Time Multiplayer Strategy Game), Technische Hochschule Ulm.

A turn-based, asymmetric multiplayer card game for 4 to 7 players: 3 to 6 heroes explore a grid-based dungeon while one Dungeon Master (DM) tries to stop them by summoning monsters, placing hidden traps and triggering events. All game state lives on an authoritative server.

## Where to find what

| I am looking for... | Location |
|---|---|
| Team, roles, meeting notes | [`docs/00_organization/`](docs/00_organization/) |
| Vision, product backlog, risk list | [`docs/01_inception/`](docs/01_inception/) |
| Architecture notebook, decision records | [`docs/02_elaboration/`](docs/02_elaboration/) |
| Sprint backlogs and progress per increment | [`docs/03_construction/`](docs/03_construction/) |
| Final presentation, poster, retrospective | [`docs/04_transition/`](docs/04_transition/) |
| Adversarial round-robin (week 14) report | [`docs/05_adversarial/`](docs/05_adversarial/) |
| Source code | `engine/`, `server/`, `client/`, `bot/`, `common/` |
| Card and monster definitions | [`data/`](data/) |
| Network fault-injection harness | [`tools/fault-injection/`](tools/fault-injection/) |
| How we work (branches, reviews, Definition of Done) | [`CONTRIBUTING.md`](CONTRIBUTING.md) |

## Source layout

| Module | Deliverable | Content |
|---|---|---|
| `engine/` | D1 | Game rules engine: state, turns, mana, cards, monsters, view filtering. No networking or rendering code. |
| `server/` | D2, D4, D5 | Authoritative server, action validation, lobby, game history, reconnect handling |
| `client/` | D3 | Rendering, input, client-side prediction and reconciliation |
| `bot/` | D6 | Autonomous player using the same network interface as the human client |
| `common/` | | Network message definitions shared by server, client and bot |
| `tools/fault-injection/` | D7 | Latency and packet-loss test harness |

## Building

Requirements: CMake 3.20+, a C++20 compiler (GCC 11+, Clang 14+, MSVC 2022).

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

## Timeline

| Week | Date | Milestone |
|---|---|---|
| 1 | 01.10.2026 | Kickoff: team and topic |
| 2 | 08.10.2026 | Vision document |
| 3 | 15.10.2026 | Product backlog, non-functional constraints, risk list |
| 4-5 | 22.10 / 29.10.2026 | Architecture notebook, executable architecture, Sprint 1 planning, decision record |
| 6-11 | 05.11 - 10.12.2026 | Increments 1 to 3 |
| 12 | 17.12.2026 | Product demo, poster |
| 13 | 07.01.2027 | Final code, retrospective, individual timelogs |
| 14 | 14.01.2027 | Adversarial round-robin exercise |
