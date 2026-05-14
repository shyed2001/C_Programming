# Graph Report - C_Programming  (2026-05-14)

## Corpus Check
- 128 files · ~683,341 words
- Verdict: corpus is large enough that graph structure adds value.

## Summary
- 338 nodes · 296 edges · 19 communities detected
- Extraction: 98% EXTRACTED · 2% INFERRED · 0% AMBIGUOUS · INFERRED: 6 edges (avg confidence: 0.8)
- Token cost: 0 input · 0 output

## Community Hubs (Navigation)
- [[_COMMUNITY_Community 0|Community 0]]
- [[_COMMUNITY_Community 1|Community 1]]
- [[_COMMUNITY_Community 2|Community 2]]
- [[_COMMUNITY_Community 3|Community 3]]
- [[_COMMUNITY_Community 4|Community 4]]
- [[_COMMUNITY_Community 5|Community 5]]
- [[_COMMUNITY_Community 6|Community 6]]
- [[_COMMUNITY_Community 7|Community 7]]
- [[_COMMUNITY_Community 8|Community 8]]
- [[_COMMUNITY_Community 9|Community 9]]
- [[_COMMUNITY_Community 11|Community 11]]
- [[_COMMUNITY_Community 12|Community 12]]
- [[_COMMUNITY_Community 13|Community 13]]
- [[_COMMUNITY_Community 14|Community 14]]
- [[_COMMUNITY_Community 15|Community 15]]
- [[_COMMUNITY_Community 16|Community 16]]
- [[_COMMUNITY_Community 17|Community 17]]
- [[_COMMUNITY_Community 18|Community 18]]
- [[_COMMUNITY_Community 19|Community 19]]

## God Nodes (most connected - your core abstractions)
1. `main()` - 24 edges
2. `main()` - 12 edges
3. `main()` - 11 edges
4. `get_string()` - 10 edges
5. `main()` - 5 edges
6. `printLine()` - 4 edges
7. `reverseArray()` - 4 edges
8. `main()` - 4 edges
9. `printPoint()` - 4 edges
10. `get_float()` - 3 edges

## Surprising Connections (you probably didn't know these)
- `get_string()` --calls--> `main()`  [INFERRED]
  cs50.c → cs50getstring.c
- `get_string()` --calls--> `main()`  [INFERRED]
  cs50.c → testcs50h.c
- `main()` --calls--> `reverseArray()`  [INFERRED]
  Test111.c → C_ModularProgrammingMemoryManagement\FunctionRecursion.c
- `main()` --calls--> `get_long()`  [INFERRED]
  credit.c → cs50.c
- `get_string()` --calls--> `main()`  [INFERRED]
  cs50.c → testcaesar.c

## Communities

### Community 0 - "Community 0"
Cohesion: 0.17
Nodes (24): addThree(), addThreePointer(), ageChange(), ConvertLength(), ConvertTempetature(), ConvertWeight(), doSomething(), factorial() (+16 more)

### Community 1 - "Community 1"
Cohesion: 0.14
Nodes (11): advanceDay(), main(), Print_Date(), printDate(), printPoint(), printPoly(), printStudent(), printTriangle() (+3 more)

### Community 2 - "Community 2"
Cohesion: 0.13
Nodes (13): main(), get_char(), get_double(), get_float(), get_int(), get_long(), get_long_long(), get_string() (+5 more)

### Community 3 - "Community 3"
Cohesion: 0.29
Nodes (12): add(), allocateIntArray(), allocateString(), behind(), findAverage(), main(), myFunction(), printArray() (+4 more)

### Community 4 - "Community 4"
Cohesion: 0.24
Nodes (4): B(), do_operation(), main(), print()

### Community 5 - "Community 5"
Cohesion: 0.7
Nodes (4): main(), reset1(), reset2(), reset3()

### Community 6 - "Community 6"
Cohesion: 0.6
Nodes (3): ctof(), ftoc(), main()

### Community 7 - "Community 7"
Cohesion: 0.83
Nodes (3): main(), sayHI(), sayhi2()

### Community 8 - "Community 8"
Cohesion: 0.83
Nodes (3): main(), printSignedRange(), printUnsignedRange()

### Community 9 - "Community 9"
Cohesion: 1.0
Nodes (2): alphabet_validity_check(), main()

### Community 11 - "Community 11"
Cohesion: 1.0
Nodes (2): fact(), main()

### Community 12 - "Community 12"
Cohesion: 1.0
Nodes (2): main(), valid_triangle_check()

### Community 13 - "Community 13"
Cohesion: 1.0
Nodes (2): main(), max()

### Community 14 - "Community 14"
Cohesion: 1.0
Nodes (2): main(), swap()

### Community 15 - "Community 15"
Cohesion: 1.0
Nodes (2): main(), swap()

### Community 16 - "Community 16"
Cohesion: 1.0
Nodes (2): cube(), main()

### Community 17 - "Community 17"
Cohesion: 1.0
Nodes (2): average(), main()

### Community 18 - "Community 18"
Cohesion: 1.0
Nodes (2): main(), valid_triangle_check()

### Community 19 - "Community 19"
Cohesion: 1.0
Nodes (2): main(), print_character()

## Knowledge Gaps
- **Thin community `Community 9`** (3 nodes): `alphabetvaliditycheck.c`, `alphabet_validity_check()`, `main()`
  Too small to be a meaningful cluster - may be noise or needs more connections extracted.
- **Thin community `Community 11`** (3 nodes): `fact()`, `main()`, `factorial.c`
  Too small to be a meaningful cluster - may be noise or needs more connections extracted.
- **Thin community `Community 12`** (3 nodes): `main()`, `valid_triangle_check()`, `functions CS50.c`
  Too small to be a meaningful cluster - may be noise or needs more connections extracted.
- **Thin community `Community 13`** (3 nodes): `main()`, `max()`, `iffunction.c`
  Too small to be a meaningful cluster - may be noise or needs more connections extracted.
- **Thin community `Community 14`** (3 nodes): `main()`, `swap()`, `passbyreference.c`
  Too small to be a meaningful cluster - may be noise or needs more connections extracted.
- **Thin community `Community 15`** (3 nodes): `main()`, `swap()`, `passbyvalue.c`
  Too small to be a meaningful cluster - may be noise or needs more connections extracted.
- **Thin community `Community 16`** (3 nodes): `cube()`, `main()`, `returntypestatement.c`
  Too small to be a meaningful cluster - may be noise or needs more connections extracted.
- **Thin community `Community 17`** (3 nodes): `average()`, `main()`, `ScoresGradesResults.c`
  Too small to be a meaningful cluster - may be noise or needs more connections extracted.
- **Thin community `Community 18`** (3 nodes): `main()`, `valid_triangle_check()`, `validtrianglecheck.c`
  Too small to be a meaningful cluster - may be noise or needs more connections extracted.
- **Thin community `Community 19`** (3 nodes): `UnionAndStruct.c`, `main()`, `print_character()`
  Too small to be a meaningful cluster - may be noise or needs more connections extracted.

## Suggested Questions
_Questions this graph is uniquely positioned to answer:_

- **Why does `reverseArray()` connect `Community 0` to `Community 5`?**
  _High betweenness centrality (0.002) - this node is a cross-community bridge._
- **Are the 3 inferred relationships involving `get_string()` (e.g. with `main()` and `main()`) actually correct?**
  _`get_string()` has 3 INFERRED edges - model-reasoned connections that need verification._
- **Should `Community 1` be split into smaller, more focused modules?**
  _Cohesion score 0.14 - nodes in this community are weakly interconnected._
- **Should `Community 2` be split into smaller, more focused modules?**
  _Cohesion score 0.13 - nodes in this community are weakly interconnected._