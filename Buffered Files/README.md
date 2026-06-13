# 📁 Buffered I/O in C

> C programs that demonstrate file handling and buffered input/output using the standard `<stdio.h>` library.

---

## 📂 Problems

| # | File | Problem | Concepts |
|---|------|---------|----------|
| 1 | [file_write_read.c](./file_write_read.c) | ✍️ Write text to a file, then reopen and print its contents | `fopen`, `fprintf`, `fgets`, `fclose` |
| 2 | [file_seek_read.c](./file_seek_read.c) | 🔄 Read the same portion of a file twice using seek | `fseek`, `ftell`, `fread`, `rewind` |
| 3 | [file_buffered_read.c](./file_buffered_read.c) | 🧠 Set a custom user-space buffer, then read and print file contents | `setvbuf`, `fread`, `fopen`, buffering modes |

---

## 🧠 Concepts Covered

- ✅ Opening and closing files with `fopen` / `fclose`
- ✅ Writing and reading with `fprintf`, `fgets`, `fread`
- ✅ Repositioning the file pointer with `fseek` and `rewind`
- ✅ Custom buffering with `setvbuf`
- ✅ Understanding user-space buffering vs kernel I/O