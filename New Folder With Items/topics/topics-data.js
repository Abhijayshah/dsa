// Runtime topic data for the DSA site
// Note: This JS is consumed by topics/template.html. A TypeScript version (topics-data.ts)
// with interfaces is provided for development. Keep slugs consistent with TOC links.

/**
 * @typedef {Object} Topic
 * @property {string} slug
 * @property {string} title
 * @property {string} category
 * @property {string} [description]
 * @property {string} [youtubeUrl]
 * @property {string} [pdfUrl]
 * @property {string} [googleDocUrl]
 * @property {string[]} [notes]
 */

/** @type {Topic[]} */
const TOPICS = [
  // Introduction
  { slug: "intro-welcome", title: "Welcome to DSA - RED", category: "Introduction", description: "Course overview, structure, and how to get the most out of Supreme Batch." },
  { slug: "intro-orientation", title: "Orientation Session - 31st March", category: "Introduction", description: "Kickoff session agenda and resources." },

  // Basics of Programming
  { slug: "basics-l1", title: "L1-Basics of Programming", category: "Basics" },
  { slug: "basics-l2", title: "L2-Basics of Programming", category: "Basics" },
  { slug: "basics-l3", title: "L3-Basics of Programming", category: "Basics" },
  { slug: "basics-dc", title: "DC-Basics of Programming", category: "Basics" },
  { slug: "basics-ms", title: "MS-Basics of Programming", category: "Basics" },

  // Pattern Printing
  { slug: "patterns-l1", title: "L1-Pattern Printing", category: "Pattern Printing" },
  { slug: "patterns-l2", title: "L2-Pattern Printing", category: "Pattern Printing" },
  { slug: "patterns-l3", title: "L3-Pattern Printing", category: "Pattern Printing" },
  { slug: "patterns-ds", title: "DS-Pattern Printing", category: "Pattern Printing" },
  { slug: "patterns-ms", title: "MS-Pattern Printing", category: "Pattern Printing" },

  // Arrays
  { slug: "arrays-basic-maths", title: "L1-Basic Maths Problems", category: "Arrays" },
  { slug: "arrays-l1", title: "L1-Arrays", category: "Arrays" },
  { slug: "arrays-l2", title: "L2-Arrays", category: "Arrays" },
  { slug: "arrays-l3", title: "L3-Arrays", category: "Arrays" },
  { slug: "arrays-l4", title: "L4-Arrays", category: "Arrays" },
  { slug: "arrays-ds-maths", title: "DS-Maths + Array Basics", category: "Arrays" },
  { slug: "arrays-ms-maths", title: "MS-Maths Basics", category: "Arrays" },
  { slug: "arrays-ds", title: "DS-Arrays", category: "Arrays" },
  { slug: "arrays-ms", title: "MS-Arrays", category: "Arrays" },

  // Searching & Sorting
  { slug: "sns-l1", title: "L1-Binary Search", category: "Searching & Sorting" },
  { slug: "sns-l2", title: "L2-Binary Search", category: "Searching & Sorting" },
  { slug: "sns-l3", title: "L3-Binary Search", category: "Searching & Sorting" },
  { slug: "sns-ds", title: "DS-Searching & Sorting", category: "Searching & Sorting" },
  { slug: "sns-ms", title: "MS-SnS", category: "Searching & Sorting" },

  // Strings
  { slug: "strings-l1", title: "L1-Strings", category: "Strings" },
  { slug: "strings-l2", title: "L2-Strings", category: "Strings" },
  { slug: "strings-l3", title: "L3-Strings", category: "Strings" },
  { slug: "strings-ds", title: "DS: Strings", category: "Strings" },
  { slug: "strings-ms", title: "MS: Strings", category: "Strings" },

  // Pointers (Needed Maths & Pointers)
  { slug: "pointers-l1", title: "L1-Pointers", category: "Pointers" },
  { slug: "pointers-l2", title: "L2-Pointers", category: "Pointers" },

  // Recursion
  { slug: "recursion-l1", title: "L1-Recursion", category: "Recursion" },
  { slug: "recursion-l2", title: "L2-Recursion", category: "Recursion" },
  { slug: "recursion-l3", title: "L3-Recursion", category: "Recursion" },
  { slug: "recursion-ds", title: "DS: Recursion", category: "Recursion" },

  // Backtracking / DnC
  { slug: "bt-l1", title: "L1 - BT and DnC", category: "Backtracking" },
  { slug: "bt-l2", title: "L2 - BT and DnC", category: "Backtracking" },
  { slug: "bt-l3", title: "L3 - BT and DnC", category: "Backtracking" },
  { slug: "bt-l4", title: "L4 - BT and DnC", category: "Backtracking" },
  { slug: "bt-ds", title: "DS: DnC", category: "Backtracking" },
  { slug: "bt-ms", title: "MS: DnC", category: "Backtracking" },

  // Linked Lists
  { slug: "ll-l1", title: "L1 - Linked Lists", category: "Linked Lists" },
  { slug: "ll-l3", title: "L3 - Linked Lists", category: "Linked Lists" },
  { slug: "ll-l4", title: "L4 - Linked Lists", category: "Linked Lists" },
  { slug: "ll-ds", title: "DS: LL", category: "Linked Lists" },
  { slug: "ll-ms", title: "MS: LL", category: "Linked Lists" },

  // Stacks
  { slug: "stacks-l1", title: "L1 - Stacks", category: "Stacks" },
  { slug: "stacks-l2", title: "L2 - Stacks", category: "Stacks" },
  { slug: "stacks-ds", title: "DS: Stacks", category: "Stacks" },
  { slug: "stacks-ms", title: "MS: Stacks", category: "Stacks" },

  // Queues
  { slug: "queues-l1", title: "L1 - Queues", category: "Queues" },
  { slug: "queues-l2", title: "L2 - Queues", category: "Queues" },
  { slug: "queues-l3", title: "L3 - Queues", category: "Queues" },
  { slug: "queues-ds", title: "DS: Queue", category: "Queues" },

  // Trees (Generic or Binary Trees)
  { slug: "trees-l1", title: "L1 - Trees", category: "Trees" },
  { slug: "trees-l2", title: "L2 - Trees", category: "Trees" },
  { slug: "trees-l3", title: "L3 - Trees", category: "Trees" },
  { slug: "trees-ds", title: "DS: Trees", category: "Trees" },
  { slug: "trees-ms", title: "MS: Trees", category: "Trees" },

  // Binary Search Trees
  { slug: "bst-l1", title: "L1 - BST", category: "Binary Search Trees" },
  { slug: "bst-l2", title: "L2 - BST", category: "Binary Search Trees" },
  { slug: "bst-l3", title: "L3 - BST", category: "Binary Search Trees" },
  { slug: "bst-ds", title: "DS - BST", category: "Binary Search Trees" },
  { slug: "bst-ms", title: "MS: BST", category: "Binary Search Trees" },

  // Heaps
  { slug: "heaps-l1", title: "L1 - Heaps", category: "Heaps" },
  { slug: "heaps-l2", title: "L2 - Heaps", category: "Heaps" },
  { slug: "heaps-l3", title: "L3 - Heaps", category: "Heaps" },
  { slug: "heaps-ds", title: "DS: Heap", category: "Heaps" },
  { slug: "heaps-ms", title: "MS: Heap", category: "Heaps" },

  // Tries
  { slug: "tries-l2", title: "L2 - Maps n Tries", category: "Tries" },
  { slug: "tries-l3", title: "L3 - Maps n Tries", category: "Tries" },
  { slug: "tries-ds", title: "DS: Maps n Tries", category: "Tries" },
  { slug: "tries-ms", title: "MS: Maps n Tries", category: "Tries" },

  // Dynamic Programming
  { slug: "dp-l1", title: "L1 - DP", category: "Dynamic Programming" },
  { slug: "dp-l2", title: "L2 - DP", category: "Dynamic Programming" },
  { slug: "dp-l3", title: "L3 - DP", category: "Dynamic Programming" },
  { slug: "dp-l4", title: "L4 - DP", category: "Dynamic Programming" },
  { slug: "dp-ds-l1", title: "DS: DP L1", category: "Dynamic Programming" },
  { slug: "dp-ds-l2", title: "DS: DP L2", category: "Dynamic Programming" },
  { slug: "dp-ms", title: "MS: DP", category: "Dynamic Programming" },

  // Graphs
  { slug: "graphs-l1", title: "L1 - Graphs", category: "Graphs" },
  { slug: "graphs-l2", title: "L2 - Graphs", category: "Graphs" },
  { slug: "graphs-l3", title: "L3 - Graphs", category: "Graphs" },
  { slug: "graphs-l8", title: "L8 - Graphs", category: "Graphs" },
  { slug: "graphs-l9", title: "L9 - Graphs", category: "Graphs" },
  { slug: "graphs-l11", title: "L11 - Graphs", category: "Graphs" },
  { slug: "graphs-ds-concepts", title: "DS: Graphs [Concepts]", category: "Graphs" },
  { slug: "graphs-ds-2", title: "DS: Graphs - 2", category: "Graphs" },
  { slug: "graphs-ms", title: "MS: Graph", category: "Graphs" },

  // Miscellaneous
  { slug: "misc-last-class", title: "The LAST LIVE Class", category: "Miscellaneous" },
];

/** Basic defaults for placeholder resources */
const DEFAULTS = {
  youtubeUrl: "https://www.youtube.com/embed/dQw4w9WgXcQ?rel=0",
  pdfUrl: "#", // TODO: replace with actual PDF URL when available
  googleDocUrl: "https://docs.google.com/document/d/placeholder",
  description: "Detailed documentation, examples, and references coming soon.",
  notes: [
    "Concept breakdown and intuition",
    "Key formulas and invariants",
    "Common pitfalls and interview tips",
  ],
};

// Fill defaults for missing fields to avoid runtime errors
for (const t of TOPICS) {
  if (!t.youtubeUrl) t.youtubeUrl = DEFAULTS.youtubeUrl;
  if (!t.pdfUrl) t.pdfUrl = DEFAULTS.pdfUrl;
  if (!t.googleDocUrl) t.googleDocUrl = DEFAULTS.googleDocUrl;
  if (!t.description) t.description = DEFAULTS.description;
  if (!t.notes) t.notes = DEFAULTS.notes;
}

export { TOPICS };