# 0x0D. C - Preprocessor

## Project Overview
This project is part of the ALX Software Engineering program and focuses on understanding and working with C preprocessor directives and macros.

## Requirements
- **Allowed Editors:** vi, vim, emacs
- **Compilation Environment:** Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **File Ending:** All files should end with a new line
- **Coding Style:** Your code should use the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- **Global Variables:** Not allowed
- **Functions Per File:** No more than 5 functions per file
- **Allowed C Standard Library Functions:** `malloc`, `free`, `exit`, `_putchar`
- **Note:** Do not push `_putchar.c`
- **Header Files:** All header files should be include guarded

## Tasks
1. **Object-like Macro:** Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
2. **Pi:** Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
3. **File name:** Write a program that prints the name of the file it was compiled from, followed by a new line.
4. **Function-like Macro:** Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.
5. **SUM:** Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

## Usage
To compile and run each task, you can use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [source_file.c] -o [output_binary]
./[output_binary]

