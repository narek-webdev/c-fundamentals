# 🔧 Bitwise Operations in C

A collection of C programs that solve problems using **bitwise operators** — one of the most efficient and low-level techniques in systems programming.

---

## 📁 Files

| # | File | Problem | Operator |
|---|------|---------|----------|
| 1 | [even_or_odd.c](./even_or_odd.c) | Check if a positive integer is even or odd | `&` |
| 2 | [set_bit_zero.c](./set_bit_zero.c) | Set the 0th bit of a number to 1 | `\|` |
| 3 | [double_number.c](./double_number.c) | Double a number using bit shifting | `<<` |
| 4 | [toggle_case.c](./toggle_case.c) | Toggle character case (upper ↔ lower) | `^` |

---

## 🧠 Operators Used

| Operator | Name | Description |
|----------|------|-------------|
| `&` | AND | Sets bit to 1 only if both bits are 1 |
| `\|` | OR | Sets bit to 1 if at least one bit is 1 |
| `^` | XOR | Sets bit to 1 if bits are different |
| `<<` | Left Shift | Shifts bits left (multiplies by 2) |
| `>>` | Right Shift | Shifts bits right (divides by 2) |

---

## ▶️ How to Compile & Run

```bash
gcc filename.c -o output && ./output
```

**Example:**
```bash
gcc even_or_odd.c -o even_or_odd && ./even_or_odd
```

---

## 💡 Why Bitwise?

Bitwise operations work directly on binary representations of numbers, making them:
- ⚡ **Faster** than arithmetic operators
- 🧮 **Memory efficient**
- 🔩 Essential in **systems programming**, **embedded systems**, and **competitive programming**

---

*Part of my [C Programming exercises](../README.md) at Picsart Academy.*