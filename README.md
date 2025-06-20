# 🌀 push_swap  


## 📋 Summary

`push_swap` is an algorithmic project from 42 school. The goal is to sort a stack of integers using a limited set of stack operations in the smallest number of steps possible.

This project is written in **C**, and it's a great introduction to sorting algorithms, algorithmic complexity, and optimization techniques.

---

## 🧠 Objectives

- Master basic sorting algorithms (e.g. radix, quicksort-like partitioning)
- Learn how to measure and optimize algorithmic complexity
- Improve C programming skills with strict memory and norm constraints
- Learn to handle input parsing and error checking robustly

---

## ⚙️ How it works

You are given two stacks, `a` and `b`, and a list of unique integers as input.  
At the start, all integers are placed in stack `a`, and stack `b` is empty.

You must write a program called `push_swap` that calculates and prints the *shortest possible* sequence of operations to sort stack `a` in ascending order.

---

## 📦 Allowed Instructions

- **sa / sb / ss** — swap the first two elements of stack `a`, `b`, or both
- **pa / pb** — push the top element from one stack to the other
- **ra / rb / rr** — rotate stack `a`, `b`, or both (first element becomes last)
- **rra / rrb / rrr** — reverse rotate stack `a`, `b`, or both (last element becomes first)

---

## 📌 Usage

### Compile:

```bash
make
