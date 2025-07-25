
# Experiment 5: Exploring Decision-Making Constructs in C++

---

## Aim

Gain hands-on experience with decision-making structures in C++ including:

- if, if-else, and nested if-else statements.
- switch-case statement, incorporating break and exit commands.

---

## Tool Used

Visual Studio Code (VS Code)

---

## Objectives

- Implement conditional logic using if and nested if-else.
- Use switch-case for multi-way branching.
- Understand how break controls flow inside switch.
- Learn when to choose if-else over switch-case.

---

## Theory

### If-Else Statements

Used to execute code blocks based on true or false conditions, enabling binary decision making.

### Nested If-Else

Supports multi-level decision making by placing if-else inside other conditional blocks to test multiple conditions sequentially.

### Switch-Case

Provides a clean way to compare a single variable against fixed values, executing matching code blocks. The break statement stops fall-through, and default handles unmatched cases.

---

### Key Notes:

- Omitting break causes execution to continue into subsequent cases unintentionally.
- default case handles unexpected or unlisted inputs.

---

## Concepts Applied

- if, if-else, nested if-else for condition checking.
- switch-case for discrete value selection.
- break to prevent fall-through.
- exit(0) for early termination.

---

## Program Overview

Multiple programs demonstrating decision-making tasks:

- Check if number is even or odd.
- Determine the largest among three numbers.
- Identify vowel or consonant input.
- Simple calculator using switch-case.
- Display weekday name based on number input.

if-else suits range or conditional checks, while switch-case is ideal for fixed-value comparisons. The use of break ensures precise control within switch blocks. exit(0) cleanly stops program execution when needed.

---

## Execution Flow

1. Input variables are initialized.
2. Conditions or switch expressions are evaluated.
3. Corresponding code blocks execute based on the evaluation.
4. break or exit(0) controls flow as required.
5. Results are printed.
6. Program continues or ends.

---

## Sample Outputs

**Even-Odd Check**

- Input: 3456  
- Output: The entered number 3456 is even

**Largest of Three Numbers**

- Inputs: -1, 1, 0  
- Output: 1 is greatest

- Inputs: 2, 2, 2  
- Output: All are equal

- Inputs: -1, -2, -2  
- Output: -1 is greatest

**Vowel or Consonant**

- Input: e  
- Output: It is a vowel

**Basic Calculator**

- Inputs: 44, 88, choice 4 (division)  
- Output: Quotient: 0.5

- Inputs: 44, 0, choice 4  
- Output: Invalid (division by zero handled)

**Weekday Display**

- Input: 7  
- Output: It's a Sunday!! The real enjoyment of next week begins

- Input: 10  
- Output: Invalid

---

This experiment clarifies how different decision-making structures control program flow and respond dynamically to input conditions.

