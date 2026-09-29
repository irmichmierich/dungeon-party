# How We Work

## Branches

- `main` is always buildable and all tests pass. Nobody pushes to `main` directly.
- Work happens on a branch named after the backlog item: `feature/<story-id>-short-name`, `fix/<issue-id>-short-name`, `docs/<topic>`.
  Example: `feature/12-trap-placement`

## Commits

Short imperative summary, with the story or issue ID:

```
#12 Add trap placement validation
```

## Pull requests and reviews

1. Open a pull request into `main` and fill in the template.
2. At least **one other team member** reviews and approves it.
3. The CI build (compile + tests) must be green.
4. The author merges after approval.

Reviews are part of the grade ("schedule and conduct reviews"), so leave real comments, not only an approval.

## Definition of Done

A backlog item is done when:

- [ ] The acceptance criteria of the user story are met.
- [ ] Code compiles without warnings on CI.
- [ ] New logic in `engine/` or `server/` has unit tests.
- [ ] The pull request was reviewed and merged.
- [ ] Affected documentation (architecture notebook, README) is updated.
- [ ] The status in the sprint backlog is set to `done`.

## Code style

- C++20, formatted with `clang-format` (config in `.clang-format`). Run it before committing.
- Classes `PascalCase`, functions and variables `camelCase`, private members with a trailing underscore (`hp_`), constants `kPascalCase`.
- The `engine/` module must not include any networking or graphics headers.

## Meetings

- Sprint length: two weeks, aligned with the increment deadlines.
- Weekly team meeting plus short check-ins in the group chat.
- Notes go into `docs/00_organization/meeting-notes/` using the template there.

## Individual timelog

Everyone keeps their own timelog (course template) and logs **every week**. It is an examination prerequisite.
