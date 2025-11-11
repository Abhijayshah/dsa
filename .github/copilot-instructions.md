# Copilot Workspace Instructions – DSA Learning Site + C++ Practice

These instructions teach AI coding agents how to be productive immediately in this repo by knowing the architecture, workflows, and patterns that are actually used here.

## Big picture

- Two tracks in one repo:
  1) Static DSA site (GitHub Pages ready) at the repo root: `index.html` (notes + code + flowcharts) and `flowchart.html` (multi-diagram viewer).
  2) C++ practice programs (`*.cpp`) for CP-style exercises; binaries sometimes kept under `output/` from previous runs.
- No build system for the site; all styling/JS is inline + CDNs (Prism for code highlighting, Mermaid for diagrams).


## Site architecture and patterns

- `index.html` is a single-page app with: sticky header/nav, sidebar TOC (`aside.toc`), and topic cards inside `<main id="topics">`.
- Topic card contract (copy this pattern):
  - Example: `<article id="topic-arrays-intro" class="card topic" data-title="Arrays - Introduction" data-difficulty="Beginner">`.
  - Flowchart: `<pre class="mermaid">…graph LR/TD…</pre>`.
  - Code blocks (Prism):
    - C++: `<pre class="language-cpp"><code class="language-cpp">…</code></pre>`
    - Python: `<pre class="language-python"><code class="language-python">…</code></pre>`
  - Optional copy buttons: `<button class="btn copy-btn" data-target="cpp|python|java">Copy …</button>` (script reads `data-target`).
- Page behaviors to preserve:
  - Theme toggle via `data-theme` + `localStorage('theme')`.
  - Search filters `.topic` cards using `dataset.title`/`dataset.difficulty`.
  - Favorites bookmark toggles per-card with key like `fav-topic-arrays-intro`.
  - Progress bar reads a hardcoded `topicsKeys` array; to track a new topic, add its id to that array and wire a button like `id="markComplete-arrays"` to set `localStorage('complete-topic-arrays-intro')`.
- `flowchart.html` renders the nine L1 flowcharts in a responsive grid and lets users switch graph direction (LR/TD) for all Mermaid blocks at once.

## Authoring flowcharts

- Use Mermaid in-place (see `README.md` and `flowchart.html` for examples). Prefer `graph LR` in `index.html`; offer LR/TD toggle only in `flowchart.html`.
- Keep one diagram per `pre.mermaid` in `index.html`. For stacked/collection views, add them to `flowchart.html`.

## C++ practice – repo conventions

- Style: beginner-friendly, STL-first, avoid macro spam; use `long long` when overflow is possible; keep `main()` minimal.
- IO template (consistent with files like `L1.cpp`, `L3.cpp`, `main.cpp`):
  - `ios::sync_with_stdio(false); cin.tie(nullptr);` and `cin/cout`.
- Algorithm notes to include in comments: boundaries (binary search), window updates, DP transitions, graph traversal order; state Time/Space in a line.

## Build, run, debug (macOS + VS Code)

- Build active C++ file: VS Code task “C/C++: clang build active file” (uses `/usr/bin/clang` and outputs next to the source file).
- Run a compiled program from the terminal (zsh): `./<executable>`; sample outputs are in `output/` from previous runs.
- Debug: use VS Code C++ debug (lldb); there’s no custom config checked in—use the default C/C++ Debugger quickstart.

## Adding a new topic card (end-to-end)

1) Add an anchor in the sidebar TOC to your article id (for example, link to the Arrays – Introduction card).
2) Append an `<article …>` to `<main id="topics">` following the contract above (include a Mermaid block and at least one code block).
3) If you want bookmarking/progress: ensure the article has a unique `id`; add the id to `topicsKeys`; add a `Mark Complete` button with id like `markComplete-arrays`.
4) Keep code samples small and runnable; use Prism language classes exactly as shown so highlighting works.

## External integrations

- GitHub Pages URL is referenced in meta tags; the site relies on CDN scripts/styles for Prism and Mermaid.
- YouTube embeds use an iframe with `listType=playlist` and a placeholder list id; replace with real playlist ids when available.

## Reference files

- Web: `index.html` (site shell + behaviors), `flowchart.html` (multi-diagram viewer).
- Flowcharts: `README.md` showcases the same nine Mermaid diagrams as rendered in `flowchart.html`.
- C++ sources: `L1.cpp`, `L3.cpp`, `main.cpp`, `main1.cpp`, `namastecodehelp/p1.cpp` (simple, stand-alone programs).

Keep changes incremental, dependency-free (no bundlers/frameworks). Prefer enhancing the existing vanilla JS patterns over introducing new ones.