# Variadic Functions Project

## Description
This project is part of the ALX Software Engineering program and focuses on variadic functions in C. It includes several tasks that aim to help you understand variadic functions, macros like `va_start`, `va_arg`, and `va_end`, and the const type qualifier.

## Project Tasks
1. **Beauty is variable, ugliness is constant**
   - Implement a function that returns the sum of all its parameters.

2. **To be is to be the value of a variable**
   - Create a function that prints numbers, followed by a new line.

3. **One woman's constant is another woman's variable**
   - Develop a function that prints strings, followed by a new line. If a string is NULL, it should print (nil) instead.

4. **To be is a to be the value of a variable**
   - Build a function that can print various types of data based on a format string:
     - 'c' for char
     - 'i' for integer
     - 'f' for float
     - 's' for string (prints (nil) for NULL strings)
     - Other characters are ignored.

## Requirements
- Allowed editors: vi, vim, emacs.
- Compilation on Ubuntu 20.04 LTS using gcc with specific options.
- Use of macros: va_start, va_arg, va_end, and _putchar.
- Follow the Betty style guide for coding.

## How to Compile
To compile the project, you can use the following command for each task (e.g., for Task 1):

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o task_1

