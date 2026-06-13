# 🧵 Threads in C

> C programs that demonstrate multithreading using POSIX threads (`pthread`).

---

## 📂 Problems

| # | File | Problem | Concepts |
|---|------|---------|----------|
| 1 | [even_numbers_thread.c](./even_numbers_thread.c) | 🔢 Create a thread that prints all even numbers from 0 to n | `pthread_create`, thread arguments |
| 2 | [even_odd_threads.c](./even_odd_threads.c) | 📄 Two threads write even/odd numbers into separate files | `pthread_create`, `pthread_join`, file I/O |

---

## 🧠 Concepts Covered

- ✅ Creating threads with `pthread_create`
- ✅ Passing arguments to threads
- ✅ Waiting for threads to finish with `pthread_join`
- ✅ Writing to files from separate threads
- ✅ Basic thread separation of work