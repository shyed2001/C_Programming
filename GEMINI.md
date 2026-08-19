# C_Programming — Gemini Instructions

Gemini CLI loads `GEMINI.md` hierarchically, so the fleet-root copy already applies
here. This file adds repo-local notes only.

## START HERE — one command, zero API cost

```bash
uv run --project F:\GitHubDesktop\GitHubCloneFiles\GitAutoRepoFleet gitautofleet inspect --path . brief
```

Run it before reading files, searching, or planning. `--path .` needs no config and no
setup. It returns file counts and sizes, a ranked read-first list, Git state,
protected-file and large-file counts, and which local stores are reachable.

## The instructions themselves live one level up

`F:\GitHubDesktop\GitHubCloneFiles\AGENTS.md` — local tool table, full `inspect`
command and flag reference, safety rules, COUPLING-025, authority order. Single source,
deliberately not copied here.

Tool lookup table: `AI_Tools_Plan_Master_Index_Lib\registries\fut.registry.jsonl`

## Non-negotiable

- Never read, echo, or transmit anything matching
  `AI_Tools_Plan_Master_Index_Lib\registries\protected-files.registry.json`.
- Ask the owner before commit, push, delete, move, rename, archive, install, PATH change,
  package-manager migration, MCP/hook/security change, or any Prime/VPS/runtime action.
- If a deterministic tool answers the question, run the tool — do not reason out its
  answer.
- Registries record declared intent, not measured state. Verify with `inspect sources`.
