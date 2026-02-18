// Topic data definitions (TypeScript) for DSA site
// This file provides type safety and structure; runtime uses topics-data.js

export type TopicCategory =
  | "Introduction"
  | "Basics"
  | "Pattern Printing"
  | "Arrays"
  | "Searching & Sorting"
  | "Strings"
  | "Pointers"
  | "Recursion"
  | "Backtracking"
  | "Linked Lists"
  | "Stacks"
  | "Queues"
  | "Trees"
  | "Binary Search Trees"
  | "Heaps"
  | "Tries"
  | "Dynamic Programming"
  | "Graphs"
  | "Miscellaneous";

export interface Topic {
  slug: string; // unique identifier used in URLs, e.g., "basics-l1"
  title: string; // human-readable title
  category: TopicCategory; // section/category
  description?: string; // short summary
  youtubeUrl?: string; // embed URL for YouTube (playlist or video)
  pdfUrl?: string; // link to PDF resource
  googleDocUrl?: string; // published Google Doc
  notes?: string[]; // bullet notes
}

// Example typed data (runtime will load JS variant):
export const topicsExample: Topic[] = [
  {
    slug: "intro-welcome",
    title: "Welcome to DSA - RED",
    category: "Introduction",
    description: "Course overview, structure, and how to get the most out of Supreme Batch.",
  },
];