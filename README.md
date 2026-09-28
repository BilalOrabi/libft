# Libft

*This project is part of the 42 curriculum and was developed by **borabi**.*

---

## 📘 Overview

**Libft** is a custom C library that reimplements essential standard library functions along with additional utility tools.  
It is the first major project in the 42 cursus and serves as a foundation for many future projects.

The library is divided into three parts:

- **Part 1:** Reimplemented libc functions  
- **Part 2:** Additional helper functions  
- **Bonus:** Linked list utilities  

---

## 📚 Function List

### **Part 1 — Libc Functions**

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is ASCII |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Zeroes out a memory area |
| `ft_memcpy` | Copies a memory area |
| `ft_memmove` | Copies memory safely (handles overlap) |
| `ft_strlcpy` | Copies a string with size limit |
| `ft_strlcat` | Concatenates strings with size limit |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Locates a character in a string |
| `ft_strrchr` | Locates a character from the end |
| `ft_strncmp` | Compares strings |
| `ft_memchr` | Searches memory for a byte |
| `ft_memcmp` | Compares memory areas |
| `ft_strnstr` | Searches for a substring |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates and zero-initializes memory |
| `ft_strdup` | Duplicates a string |

---

### **Part 2 — Additional Utility Functions**

| Function | Description |
|----------|-------------|
| `ft_substr` | Creates a substring |
| `ft_strjoin` | Joins two strings |
| `ft_strtrim` | Trims characters from the start and end |
| `ft_split` | Splits a string using a delimiter |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character |
| `ft_striteri` | Applies a function to each character (with index) |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string with a newline |
| `ft_putnbr_fd` | Writes a number to a file descriptor |

---

### **Part 3 — Linked List Functions**

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node to the front |
| `ft_lstsize` | Counts the number of nodes |
| `ft_lstlast` | Returns the last node |
| `ft_lstadd_back` | Adds a node to the end |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes all nodes |
| `ft_lstiter` | Iterates over a list |
| `ft_lstmap` | Creates a new list using a function |

---

## ⚙️ Compilation

```bash
make        # Build the library
make clean  # Remove object files
make fclean # Remove objects + library file
make re     # Rebuild everything
```

---

## 🚀 Usage

Include the header in your program:

```c
#include "libft.h"
```

Compile and link with the library:

```bash
cc your_program.c -L. -lft -o your_program
```

---

## 📖 Helpful Resources

- C Standard Library Reference  
- harm-smits 42 documentation  
- Linked List fundamentals (GeeksforGeeks)

---

## 🤖 AI Usage

AI assistance (Copilot / ChatGPT) was used for:

- Code review & explanations  
- Refactoring for readability  
- Norminette compliance help  

