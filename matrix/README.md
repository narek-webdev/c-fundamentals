# 🧮 Matrices in C

> C programs that perform various operations on 2D matrices — diagonal manipulation, element search, and row-based extraction.

---

## 📂 Problems

| # | File | Problem | Concepts |
|---|------|---------|----------|
| 1 | [zero_even_rows.c](./zero_even_rows.c) | 🟦 Replace elements of even-indexed rows with zeros | 2D arrays, nested loops, indexing |
| 2 | [anti_diagonal_sum.c](./anti_diagonal_sum.c) | ↗️ Calculate the sum of anti-diagonal elements | 2D arrays, index formula `i + j = n-1` |
| 3 | [upper_triangle_sum.c](./upper_triangle_sum.c) | 🔺 Sum all elements on and above the main diagonal | 2D arrays, triangular traversal |
| 4 | [swap_diagonals.c](./swap_diagonals.c) | 🔀 Swap elements of the main and anti-diagonal | 2D arrays, diagonal indexing, swap |
| 5 | [min_element_index.c](./min_element_index.c) | 🔍 Find the index of the minimum value in an N×M matrix | 2D arrays, linear search |
| 6 | [row_max_to_array.c](./row_max_to_array.c) | 📊 Store the max of each row into a 1D array | 2D arrays, 1D arrays, row traversal |

---

## 🧠 Concepts Covered

- ✅ Traversing rows and columns with nested loops
- ✅ Main diagonal (`i == j`) and anti-diagonal (`i + j == n-1`) indexing
- ✅ Upper and lower triangular matrix traversal
- ✅ In-place element replacement and swapping
- ✅ Searching for minimum/maximum elements
- ✅ Extracting data from a matrix into a 1D array