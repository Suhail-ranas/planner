// index.js
import React from "react";
import ReactDOM from "react-dom/client";
import "./index.css";
import App from "./App";

const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(
  <React.StrictMode>
    <App />
  </React.StrictMode>
);

// App.js
import React, { useState, useEffect } from "react";

const plan = [
  { day: 1, dsa: "Arrays + Sorting Basics", bjarne: "Ch 1: Intro + History", cherno: "Setup + Intro" },
  { day: 2, dsa: "Sorting + STL Sort", bjarne: "Ch 2: Types + Declarations", cherno: "Variables, Types" },
  { day: 3, dsa: "Searching", bjarne: "Ch 3: Functions + Pointers", cherno: "Functions, Scope" },
  { day: 4, dsa: "Recursion + Practice", bjarne: "Ch 4: Namespaces + Const", cherno: "Pointers, References" },
  { day: 5, dsa: "2D Arrays, Strings", bjarne: "Ch 5: Classes Basics", cherno: "Classes, Constructors" },
  { day: 6, dsa: "Strings + STL String", bjarne: "Ch 6: Classes Advanced", cherno: "OOP Overview" },
  { day: 7, dsa: "Bit Manipulation", bjarne: "Ch 7: Operator Overloading", cherno: "Static, Const" },
  { day: 8, dsa: "Linked List 1", bjarne: "Ch 8: Memory, New/Delete", cherno: "Memory & Heap" },
  { day: 9, dsa: "Linked List 2", bjarne: "Ch 9: Copy Control", cherno: "The Stack" },
  { day: 10, dsa: "Stack + Queue", bjarne: "Ch 10: Templates", cherno: "Templates" },
  { day: 11, dsa: "STL Stack + Queue", bjarne: "Ch 11: STL Basics", cherno: "Vectors" },
  { day: 12, dsa: "Recap + Practice", bjarne: "Ch 12: STL Containers", cherno: "STL Containers" },
  { day: 13, dsa: "Trees: Basic", bjarne: "Ch 13: Algorithms STL", cherno: "Sorting, Search STL" },
  { day: 14, dsa: "Trees: Traversals", bjarne: "Ch 14: Iterators + Lambdas", cherno: "Iterators" },
  { day: 15, dsa: "Trees: Height, Diameter", bjarne: "Ch 15: Exceptions", cherno: "Error Handling" },
  { day: 16, dsa: "Binary Search Trees", bjarne: "Ch 16: Smart Pointers", cherno: "Smart Pointers" },
  { day: 17, dsa: "Heaps + Priority Queue", bjarne: "Ch 17: Advanced Types", cherno: "Enums, Structs" },
  { day: 18, dsa: "Tries + Hashmaps", bjarne: "Ch 18: Multithreading", cherno: "Cherno Threads" },
  { day: 19, dsa: "Graphs: DFS + BFS", bjarne: "Ch 19: Concurrency", cherno: "Thread Sync" },
  { day: 20, dsa: "Graphs: Topo Sort", bjarne: "Ch 20: I/O Streams", cherno: "File I/O" },
  { day: 21, dsa: "Union-Find + Kruskal", bjarne: "Ch 21: More on Classes", cherno: "Inheritance" },
  { day: 22, dsa: "Greedy Algorithms", bjarne: "Ch 22: Design Advice", cherno: "OOP Practices" },
  { day: 23, dsa: "Backtracking", bjarne: "Ch 23: Memory Management", cherno: "Raw vs Smart Pointers" },
  { day: 24, dsa: "Dynamic Programming 1", bjarne: "Ch 24: Language Support", cherno: "RTTI, Typeid" },
  { day: 25, dsa: "Dynamic Programming 2", bjarne: "Review Templates + Lambdas", cherno: "Lambda Deep Dive" },
  { day: 26, dsa: "Sliding Window, 2 Pointers", bjarne: "Practice: Projects", cherno: "Cherno: Make Project" },
  { day: 27, dsa: "Practice Coding Sheet (Babbar/Striver)", bjarne: "Review Notes", cherno: "Input Systems" },
  { day: 28, dsa: "Mock Test + Interview Problems", bjarne: "Wrap-Up Book", cherno: "Cherno Final Video" },
  { day: 29, dsa: "Final DSA Revision", bjarne: "Notes Summary", cherno: "Cherno Project Build" },
  { day: 30, dsa: "Final Test + Leetcode", bjarne: "Reflection & PDF Notes", cherno: "Optimize + Clean Code" }
];

export default function App() {
  const [reminders, setReminders] = useState([]);

  useEffect(() => {
    const today = new Date().getDate();
    const reminder = plan.find((p) => p.day === today);
    if (reminder) {
      setReminders([reminder]);
    }
  }, []);

  return (
    <div className="p-4 max-w-4xl mx-auto">
      <h1 className="text-3xl font-bold mb-6">30-Day Advanced C++ + DSA Plan</h1>

      {reminders.length > 0 && (
        <div className="bg-yellow-100 border-l-4 border-yellow-500 text-yellow-700 p-4 rounded-xl shadow mb-6">
          <p className="font-semibold">Today's Reminder (Day {reminders[0].day}):</p>
          <ul className="list-disc list-inside">
            <li><strong>DSA:</strong> {reminders[0].dsa}</li>
            <li><strong>Bjarne Book:</strong> {reminders[0].bjarne}</li>
            <li><strong>Cherno:</strong> {reminders[0].cherno}</li>
          </ul>
        </div>
      )}

      <div className="grid grid-cols-1 md:grid-cols-2 gap-4">
        {plan.map((item) => (
          <div key={item.day} className="bg-white p-4 rounded-xl shadow hover:shadow-md transition">
            <h2 className="text-xl font-bold mb-2">Day {item.day}</h2>
            <p><strong>DSA:</strong> {item.dsa}</p>
            <p><strong>Bjarne Book:</strong> {item.bjarne}</p>
            <p><strong>Cherno:</strong> {item.cherno}</p>
          </div>
        ))}
      </div>
    </div>
  );
}

// index.css
@tailwind base;
@tailwind components;
@tailwind utilities;

body {
  background-color: #f9fafb;
  font-family: system-ui, sans-serif;
}

// package.json additions
// Make sure to install tailwindcss and add scripts
// npm install -D tailwindcss postcss autoprefixer
// npx tailwindcss init -p

// tailwind.config.js (basic)
module.exports = {
  content: ["./src/**/*.{js,jsx,ts,tsx}"],
  theme: {
    extend: {},
  },
  plugins: [],
};
