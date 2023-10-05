# 0x0C. C - More malloc, free

## Description
This project focuses on memory allocation in the C programming language using functions like `malloc`, `free`, and `exit`. The tasks in this project cover various aspects of dynamic memory allocation and manipulation.

## Requirements
- **Allowed Editors:** vi, vim, emacs
- **Compilation:** All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **File Endings:** Ensure that all your files end with a new line.
- **README.md:** A `README.md` file at the root of the project folder is mandatory.
- **Coding Style:** Your code should adhere to the Betty style, and it will be checked using `betty-style.pl` and `betty-doc.pl`.
- **Global Variables:** Do not use global variables.
- **C Standard Library Functions:** Only the following C standard library functions are allowed: `malloc`, `free`, and `exit`. The use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden.
- **_putchar:** You are allowed to use `_putchar`. You don't need to push `_putchar.c` as it won't be taken into account.
- **Example `main.c` Files:** In the provided examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo. The project will use its own `main.c` files at compilation. These files may differ from the ones shown in the examples.
- **Header File:** The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`. Don't forget to push your header file.

## Tasks

### 0. Trust no one
- Write a function that allocates memory using `malloc`.
- Prototype: `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory.
- If `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of 98.

### 1. string_nconcat
- Write a function that concatenates two strings.
- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- The returned pointer shall point to a newly allocated space in memory, containing s1 followed by the first n bytes of s2, and null-terminated.
- If the function fails, it should return NULL.
- If n is greater or equal to the length of s2, then use the entire string s2.
- Treat NULL as an empty string.

### 2. _calloc
- Write a function that allocates memory for an array using `malloc`.
- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
- Allocates memory for an array of nmemb elements of size bytes each.
- Memory is set to zero.
- Returns a pointer to the allocated memory.
- If nmemb or size is 0, returns NULL.
- If `malloc` fails, returns NULL.

### 3. array_range
- Write a function that creates an array of integers.
- Prototype: `int *array_range(int min, int max);`
- The array created should contain all values from min (included) to max (included), ordered from min to max.
- Returns a pointer to the newly created array.
- If min > max, returns NULL.
- If `malloc` fails, returns NULL.

4. **array_range**
   - Write a function that creates an array of integers.
   - Prototype: `int *array_range(int min, int max);`
   - The array created should contain all values from min (included) to max (included), ordered from min to max.
   - Returns a pointer to the newly created array.
   - If min > max, returns NULL.
   - If `malloc` fails, returns NULL.
