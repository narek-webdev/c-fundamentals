# 🔤 My String Library

> A custom re-implementation of the C standard `<string.h>` library functions from scratch using pointers and manual memory traversal.

---

## 📂 Files

| File | Functions | Description |
|------|-----------|-------------|
| [my_strlen.c](./my_strlen.c) | `my_strlen` | Returns the length of a string |
| [my_strchr.c](./my_strchr.c) | `my_strchr`, `my_strrchr` | Finds the **first** / **last** occurrence of a character in a string |
| [my_strcpy.c](./my_strcpy.c) | `my_strcpy`, `my_strncpy` | Copies a string (full or first n characters) into a destination |
| [my_strcmp.c](./my_strcmp.c) | `my_strcmp`, `my_strncmp` | Compares two strings (full or first n characters) lexicographically |

---

## 📋 Function Reference

| Function | Prototype | Equivalent |
|----------|-----------|------------|
| `my_strlen` | `size_t my_strlen(const char *s1)` | `strlen()` |
| `my_strchr` | `char* my_strchr(const char *str, char c)` | `strchr()` |
| `my_strrchr` | `char* my_strrchr(const char *str, char c)` | `strrchr()` |
| `my_strcpy` | `char* my_strcpy(char *dest, const char *src)` | `strcpy()` |
| `my_strncpy` | `char* my_strncpy(char *dest, const char *src, size_t n)` | `strncpy()` |
| `my_strcmp` | `int my_strcmp(const char *str1, const char *str2)` | `strcmp()` |
| `my_strncmp` | `int my_strncmp(const char *str1, const char *str2, size_t n)` | `strncmp()` |

---

## 🧠 Concepts Covered

- ✅ Pointer arithmetic for string traversal
- ✅ Null terminator `'\0'` handling
- ✅ Lexicographic comparison
- ✅ Manual memory copying
- ✅ Forward and backward character search