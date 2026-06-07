# 💻 Week 1: C — Algorithmic Logic & Core Structures

This directory contains my finalized problem set solutions for **Week 1** of CS50x, focusing on data types, loops, nested loops, conditional branches, and mathematical verification algorithms.

## 🛠️ Problem Set Solutions

### 1. 🪞 Mario (More Comfortable) — `mario.c`
A program that recreates the iconic double-sided Nintendo Mario Bros arcade pyramids using nested loops and math-driven character positioning.
* **Concepts Utilized:** Nested `for` loops, user-input handling via `do-while` loops, data alignment calculations (`height - row - 1`).
* **Logic Highlight:** Calibrated precise spacing on the left side of the pyramid to dynamically adjust based on user inputs restricted between `1` and `8`.

### 2. 💳 Credit (More Comfortable) — `credit.c`
A credit card fraud-prevention simulator that authenticates card numbers and identifies the issuing card carrier.
* **Concepts Utilized:** Algorithm design, digits extraction via modulo arithmetic (`% 10`), truncation via integer division (`/ 10`), tracking iteration parity.
* **Luhn's Algorithm Implementation:** 1. Multiplies every other digit by 2, starting from the second-to-last digit.
  2. Splits and sums individual product digits (e.g., $14 \rightarrow 1 + 4 = 5$).
  3. Adds the remaining un-multiplied digits to the total.
  4. Verifies if the final checksum total ends in 0 ($\text{sum} \pmod{10} == 0$).
* **Carrier Logic Tracking:** Uses digit length boundaries and high-order double-digit prefix verification to flag cards as `AMEX`, `MASTERCARD`, `VISA`, or `INVALID`.

---

## 🚀 How to Run the Programs Locally

Ensure you have the official CS50 library installed in your compiler environment before compiling.

```bash
# Clone and navigate to your workspace folder
cd 01_Foundations/CS50x/Week_1

# Compile a program
make credit

# Execute the program binary
./credit
