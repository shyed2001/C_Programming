# C_Programming — GitHub Copilot Instructions

Copilot has no hierarchical lookup and no shell, so this file must stand alone.
You cannot run the command below — ask the owner to run it and paste the output, or
read the lookup table instead. Label your output unverified until a shell-capable
agent re-checks it.

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

<!-- BEGIN TIER0-TOOLS-POINTER-20260930 | 2026-09-30 | owner MCQ "Copilot instructions in 31 repos" | AI: Claude Opus 5.5 | pointer only -->
## Local Tier 0 tools — which one, when, where to read how

Before reading many files or guessing, use a local no-token tool. If you can run commands (agent mode), run it; if
not, name the exact command and ask the owner to run it and paste the output.

| Situation | Tool · command |
|---|---|
| Start of any task · which files matter | `uv run --project F:\GitHubDesktop\GitHubCloneFiles\GitAutoRepoFleet gitautofleet inspect --path . brief` · then `context --keyword X --list-only` |
| Architecture, how X relates to Y | `graphify query "<q>"` |
| Who calls this, blast radius of a change | CBM — MCP server `codebase-memory` (read-only), or `codebase-memory-mcp.cmd cli search_graph` |
| "Where is X implemented?" | Graft — `graft.cmd ask "<q>" <repo> --source` |
| Text search · Python lint | `rg -n "<pattern>"` · `ruff check <files>` |
| Before commit | `inspect --path . preflight` |

**Where to read how (before `--help`):**
`F:\GitHubDesktop\GitHubCloneFiles\AI_Tools_Plan_Master_Index_Lib\025_TIER0_MASTER_USE_MANUAL.md` section 0a (full
trigger table T-01..T-29 and recipes) · `...\AI_Tools_Plan_Master_Index_Lib\registries\fut.registry.jsonl` (one record
per tool) · `...\AI_Tools_Plan_Master_Index_Lib\027_UNIVERSAL_AGENT_CORE.md` (full policy).
<!-- END TIER0-TOOLS-POINTER-20260930 -->
