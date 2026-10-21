# Graph Report - w.lyZcui  (2026-10-21)

## Corpus Check
- 139 files · ~685,121 words
- Verdict: corpus is large enough that graph structure adds value.

## Summary
- 390 nodes · 385 edges · 123 communities (19 shown, 7 thin omitted)
- Extraction: 98% EXTRACTED · 2% INFERRED · 0% AMBIGUOUS · INFERRED: 6 edges (avg confidence: 0.85)
- Token cost: 0 input · 0 output

## Community Hubs (Navigation)
- cs50.c
- FunctionRecursion.c
- Cprog_Advanced_Data_Types.c
- PointersAndMemoryManagement.c
- FunctionPointer.c
- valid_triangle_check
- C_Programming — GitHub Copilot Instructions
- valid_triangle_check
- C_Programming — Agent Instructions
- C_Programming — Antigravity Instructions
- C_Programming_UsingLinuxToolsandLibraries.c
- C_Programming — Claude Instructions
- C_Programming — Gemini Instructions
- main
- valid_triangle_check
- Universal Agent Core — pointer
- print_character
- functions.c
- rangeofdatatypes.c
- alphabetvaliditycheck.c
- factorial.c
- passbyreference.c
- passbyvalue.c
- returntypestatement.c
- ScoresGradesResults.c
- README.md

## God Nodes (most connected - your core abstractions)
1. `main()` - 23 edges
2. `main()` - 12 edges
3. `get_string()` - 12 edges
4. `main()` - 11 edges
5. `main()` - 5 edges
6. `valid_triangle_check()` - 5 edges
7. `valid_triangle_check()` - 5 edges
8. `C_Programming — GitHub Copilot Instructions` - 5 edges
9. `printLine()` - 4 edges
10. `reverseArray()` - 4 edges

## Surprising Connections (you probably didn't know these)
- `main()` --calls--> `reverseArray()`  [INFERRED]
  Test111.c → C_ModularProgrammingMemoryManagement/FunctionRecursion.c
- `main()` --calls--> `get_string()`  [INFERRED]
  cs50getstring.c → cs50.c
- `main()` --calls--> `get_long()`  [INFERRED]
  credit.c → cs50.c
- `main()` --calls--> `get_string()`  [INFERRED]
  testcaesar.c → cs50.c
- `main()` --calls--> `get_string()`  [INFERRED]
  testcs50h.c → cs50.c

## Import Cycles
- None detected.

## Communities (123 total, 7 thin omitted)

### Community 0 - "cs50.c"
Cohesion: 0.10
Nodes (19): main(), string, get_char(), get_double(), get_float(), get_int(), get_long(), get_long_long() (+11 more)

### Community 1 - "FunctionRecursion.c"
Cohesion: 0.16
Nodes (23): addThree(), addThreePointer(), ageChange(), ConvertLength(), ConvertTempetature(), ConvertWeight(), doSomething(), factorial() (+15 more)

### Community 2 - "Cprog_Advanced_Data_Types.c"
Cohesion: 0.14
Nodes (11): advanceDay(), main(), Print_Date(), printDate(), printPoint(), printPoly(), printStudent(), printTriangle() (+3 more)

### Community 3 - "PointersAndMemoryManagement.c"
Cohesion: 0.29
Nodes (12): add(), allocateIntArray(), allocateString(), behind(), findAverage(), main(), myFunction(), printArray() (+4 more)

### Community 4 - "FunctionPointer.c"
Cohesion: 0.22
Nodes (3): B(), do_operation(), main()

### Community 6 - "valid_triangle_check"
Cohesion: 0.40
Nodes (5): x, y, z, main(), valid_triangle_check()

### Community 7 - "C_Programming — GitHub Copilot Instructions"
Cohesion: 0.33
Nodes (5): C_Programming — GitHub Copilot Instructions, Local Tier 0 tools — which one, when, where to read how, Non-negotiable, START HERE — one command, zero API cost, The instructions themselves live one level up

### Community 8 - "valid_triangle_check"
Cohesion: 0.40
Nodes (5): x, y, z, main(), valid_triangle_check()

### Community 9 - "C_Programming — Agent Instructions"
Cohesion: 0.40
Nodes (4): C_Programming — Agent Instructions, Non-negotiable, START HERE — one command, zero API cost, The instructions themselves live one level up

### Community 10 - "C_Programming — Antigravity Instructions"
Cohesion: 0.40
Nodes (4): C_Programming — Antigravity Instructions, Non-negotiable, START HERE — one command, zero API cost, The instructions themselves live one level up

### Community 11 - "C_Programming_UsingLinuxToolsandLibraries.c"
Cohesion: 0.60
Nodes (3): ctof(), ftoc(), main()

### Community 12 - "C_Programming — Claude Instructions"
Cohesion: 0.40
Nodes (4): C_Programming — Claude Instructions, Non-negotiable, START HERE — one command, zero API cost, The instructions themselves live one level up

### Community 13 - "C_Programming — Gemini Instructions"
Cohesion: 0.40
Nodes (4): C_Programming — Gemini Instructions, Non-negotiable, START HERE — one command, zero API cost, The instructions themselves live one level up

### Community 14 - "main"
Cohesion: 0.70
Nodes (4): main(), reset1(), reset2(), reset3()

### Community 15 - "valid_triangle_check"
Cohesion: 0.40
Nodes (4): x, y, z, valid_triangle_check()

### Community 16 - "Universal Agent Core — pointer"
Cohesion: 0.50
Nodes (3): The canonical files — read these, The short form — enough to not do damage before you read the canonical files, Universal Agent Core — pointer

### Community 17 - "print_character"
Cohesion: 0.67
Nodes (3): main(), print_character(), character

### Community 18 - "functions.c"
Cohesion: 0.83
Nodes (3): main(), sayHI(), sayhi2()

### Community 19 - "rangeofdatatypes.c"
Cohesion: 0.83
Nodes (3): main(), printSignedRange(), printUnsignedRange()

## Knowledge Gaps
- **19 isolated node(s):** `The canonical files — read these`, `The short form — enough to not do damage before you read the canonical files`, `START HERE — one command, zero API cost`, `The instructions themselves live one level up`, `Non-negotiable` (+14 more)
  These have ≤1 connection - possible missing edges or undocumented components. (Counts symbols only; 235 node(s) total have ≤1 connection when file, concept and rationale nodes are included.)
- **7 thin communities (<3 nodes) omitted from report** — run `graphify query` to explore isolated nodes.

## Suggested Questions
_Questions this graph is uniquely positioned to answer:_

- **Why does `reverseArray()` connect `FunctionRecursion.c` to `main`?**
  _High betweenness centrality (0.011) - this node is a cross-community bridge._
- **Why does `main()` connect `main` to `FunctionRecursion.c`?**
  _High betweenness centrality (0.009) - this node is a cross-community bridge._
- **Are the 3 inferred relationships involving `get_string()` (e.g. with `main()` and `main()`) actually correct?**
  _`get_string()` has 3 INFERRED edges - model-reasoned connections that need verification._
- **What connects `The canonical files — read these`, `The short form — enough to not do damage before you read the canonical files`, `START HERE — one command, zero API cost` to the rest of the system?**
  _19 weakly-connected nodes found - possible documentation gaps or missing edges._
- **Should `cs50.c` be split into smaller, more focused modules?**
  _Cohesion score 0.0989247311827957 - nodes in this community are weakly interconnected._
- **Should `Cprog_Advanced_Data_Types.c` be split into smaller, more focused modules?**
  _Cohesion score 0.14285714285714285 - nodes in this community are weakly interconnected._