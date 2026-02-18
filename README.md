# DSA Codehelp RED SUPREME 4.0
## My DSA Notes

An organized, mobile-responsive site to learn Data Structures & Algorithms with clear explanations, flowcharts, code examples, videos, and PDFs. The left sidebar provides a structured Table of Contents; selecting any topic loads a detailed page on the right.

**Live Site**: https://abhijayshah.github.io/dsa/

**Repository**: https://github.com/Abhijayshah/dsa

## Highlights
- Dynamic right-side topic pages via `topics/template.html?topic=<slug>`
- Strong topic typing via `topics/topics-data.ts` (TypeScript)
- Safe, validated runtime data via `topics/topics-data.js`
- PDF preview section and placeholders for future resources
- Mermaid flowcharts and Prism syntax highlighting
- Basic dark/light theme toggle and responsive layout

## File Structure
- `/index.html` — Main page with sidebar TOC and right-side iframe content
- `/topics/` — Topic system
  - `template.html` — Reusable topic page (loads by URL param `topic`)
  - `topics-data.js` — Runtime topic data with slugs, titles, defaults
  - `topics-data.ts` — TypeScript interfaces and example for dev-time safety
- `/assets/`
  - `/images/` — Image assets placeholder
  - `/videos/` — Video assets placeholder
- `/assets/pdf/` — Consolidated PDF assets folder
  - `L1Basics_of_Programming_with_anno.pdf`
  - `L2Basics_of_Programming_with_anno.pdf`
  - `L3Basics_of_Programming_with_anno.pdf`
  - `DC-Basics of Programming .pdf`
  - `MS-Basics of Programming.pdf`
- Example C++ files and outputs:
  - `L1.cpp`, `L3.cpp`, `main.cpp`, `main1.cpp`, `11Nov.cpp`, `12Nov-NestedLoop.cpp`
  - `output/` builds and `*.dSYM` artifacts
- Misc:
  - `flowchart.html`, `L1-flowcharts_diagram.mermaid`
  - `.github/workflows/jekyll-docker.yml` (Pages workflow setup)

## How the Topic System Works
- Sidebar links in `index.html` point to `topics/template.html?topic=<slug>` and open in a right-side iframe (`name="topicFrame"`).
- `template.html` reads `topic` from the URL, validates it against `TOPICS` from `topics-data.js`, then renders:
  - Title, Category badge, description
  - YouTube embed (dummy link by default)
  - PDF link (dummy link by default)
  - Google Doc link (dummy link by default)
  - Notes list
- Error handling:
  - Missing or unknown slug shows a friendly error card
  - Non-HTTPS or missing links are disabled gracefully

## Add or Update Topics
- Edit `topics/topics-data.js` and add/update a topic object:
  - `slug` — unique ID used in URLs (e.g., `basics-l1`)
  - `title` — human-readable label (e.g., `L1-Basics of Programming`)
  - `category` — one of: `Introduction`, `Basics`, `Pattern Printing`, `Arrays`, `Searching & Sorting`, `Strings`, `Pointers`, `Recursion`, `Backtracking`, `Linked Lists`, `Stacks`, `Queues`, `Trees`, `Binary Search Trees`, `Heaps`, `Tries`, `Dynamic Programming`, `Graphs`, `Miscellaneous`
  - Optional: `description`, `youtubeUrl`, `pdfUrl`, `googleDocUrl`, `notes`
- Update the TOC in `index.html` to link the new slug:
  - Example: `topics/template.html?topic=basics-l1` with `target="topicFrame"`
- (Optional) Store assets under `assets/images/` and `assets/videos/`, and PDFs under a folder you prefer (e.g., `assets/pdfs/`) and update `pdfUrl` accordingly.

## Local Development
- Start a basic static server from project root:
  - `python3 -m http.server 8000`
  - Open `http://localhost:8000/index.html`
- Alternatively, use any static server (e.g., `npx serve`).

## Deployment (GitHub Pages)
- Branch: `main` (root folder)
- Auto-deploy: enabled via repository Settings → Pages
- Typical flow:
  - `git pull --rebase`
  - Make changes
  - `git add -A && git commit -m "Update topics/TOC/content"`
  - `git push -u origin main`
  - Wait 1–3 minutes, then verify `https://abhijayshah.github.io/DSA-Codehelp-RED-SUPREME_4.0/`

## Security & Performance
- External links use `rel="noopener"` to prevent tab hijacking
- No unsafe `innerHTML`; text rendered via `textContent`
- Validates URL parameters and resource URLs
- Responsive CSS grid ensures usability on mobile
- Lightweight dynamic template avoids duplicative static pages

## Contributing
- Keep topic slugs consistent between `index.html` and `topics/topics-data.js`
- Prefer adding new assets in `assets/` and link via relative paths
- For code examples, include concise samples (C++, Python, Java) with clear comments
- If adding heavy files, consider `.gitignore` entries to avoid committing build artifacts

## Planned Enhancements
- Search functionality for topics
- Progress tracking saved to localStorage
- Per-topic code examples with runnable snippets
- Dedicated `assets/pdfs/` folder and per-topic PDFs

## License
- Personal learning materials; please attribute when sharing.


This repository includes nine basic programming flowcharts. Below, each flowchart is rendered in its own Mermaid block so they appear stacked vertically in the README.

## 1. Multiply Two Numbers
```mermaid
graph TD
    subgraph "1. Multiply Two Numbers"
    A1[Start] --> B1[Input num1, num2]
    B1 --> C1[result = num1 * num2]
    C1 --> D1[Output result]
    D1 --> E1[End]
    end
```

## 2. Perimeter of Triangle
```mermaid
graph TD
    subgraph "2. Perimeter of Triangle"
    A2[Start] --> B2[Input side1, side2, side3]
    B2 --> C2[perimeter = side1 + side2 + side3]
    C2 --> D2[Output perimeter]
    D2 --> E2[End]
    end
```

## 3. Simple Interest
```mermaid
graph TD
    subgraph "3. Simple Interest"
    A3[Start] --> B3[Input principal, rate, time]
    B3 --> C3[SI = P * R * T / 100]
    C3 --> D3[Output SI]
    D3 --> E3[End]
    end
```

## 4. Compound Interest
```mermaid
graph TD
    subgraph "4. Compound Interest"
    A4[Start] --> B4[Input principal, rate, time, n]
    B4 --> C4["Amount = P * (1 + R/(n*100))^(n*t)"]
    C4 --> D4[CI = Amount - Principal]
    D4 --> E4[Output CI, Amount]
    E4 --> F4[End]
    end
```

## 5. Counting N to 1
```mermaid
graph TD
    subgraph "5. Counting N to 1"
    A5[Start] --> B5[Input N]
    B5 --> C5[i = N]
    C5 --> D5{i >= 1?}
    D5 -->|Yes| E5[Print i]
    E5 --> F5[i = i - 1]
    F5 --> D5
    D5 -->|No| G5[End]
    end
```

## 6. Factorial
```mermaid
graph TD
    subgraph "6. Factorial"
    A6[Start] --> B6[Input n]
    B6 --> C6[fact = 1, i = 1]
    C6 --> D6{i <= n?}
    D6 -->|Yes| E6[fact = fact * i]
    E6 --> F6[i = i + 1]
    F6 --> D6
    D6 -->|No| G6[Output fact]
    G6 --> H6[End]
    end
```

## 7. Check Prime
```mermaid
graph TD
    subgraph "7. Check Prime"
    A7[Start] --> B7[Input n]
    B7 --> C7{n <= 1?}
    C7 -->|Yes| D7[Not Prime]
    D7 --> M7[End]
    C7 -->|No| E7[isPrime = true, i = 2]
    E7 --> F7{i <= sqrt n?}
    F7 -->|Yes| G7{n % i == 0?}
    G7 -->|Yes| H7[isPrime = false]
    H7 --> I7[Break]
    I7 --> J7{isPrime?}
    G7 -->|No| K7[i = i + 1]
    K7 --> F7
    F7 -->|No| J7
    J7 -->|Yes| L7[Prime]
    J7 -->|No| D7
    L7 --> M7
    end
```

## 8. Valid Triangle
```mermaid
graph TD
    subgraph "8. Valid Triangle"
    A8[Start] --> B8[Input side1, side2, side3]
    B8 --> C8{s1+s2>s3 AND s2+s3>s1 AND s1+s3>s2?}
    C8 -->|Yes| D8[Valid Triangle]
    C8 -->|No| E8[Not Valid Triangle]
    D8 --> F8[End]
    E8 --> F8
    end
```

## 9. Max of Two Numbers
```mermaid
graph TD
    subgraph "9. Max of Two Numbers"
    A9[Start] --> B9[Input num1, num2]
    B9 --> C9{num1 > num2?}
    C9 -->|Yes| D9[Max = num1]
    C9 -->|No| E9{num2 > num1?}
    E9 -->|Yes| F9[Max = num2]
    E9 -->|No| G9[Both Equal]
    D9 --> H9[Output Max]
    F9 --> H9
    G9 --> H9
    H9 --> I9[End]
    end
```

View in Browser
- For an interactive web rendering, open `flowchart.html` in your browser.