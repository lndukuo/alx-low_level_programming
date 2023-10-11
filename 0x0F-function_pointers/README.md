# 0x0F. C - Function Pointers

## Description
This project is part of the ALX Software Engineering program and focuses on understanding and implementing function pointers in the C programming language. It includes a set of tasks that demonstrate the practical use of function pointers for various applications.

## Learning Objectives
By completing this project, you are expected to be able to explain to anyone, without the help of Google:

- What are function pointers and how to use them.
- What a function pointer exactly holds.
- Where does a function pointer point to in the virtual memory.

## Tasks

### 0. What's my name
- **Description:** Write a function that prints a name.
- **Prototype:** `void print_name(char *name, void (*f)(char *));`

### 1. If you spend too much time thinking about a thing, you'll never get it done
- **Description:** Write a function that executes a function given as a parameter on each element of an array.
- **Prototype:** `void array_iterator(int *array, size_t size, void (*action)(int));`

### 2. To hell with circumstances; I create opportunities
- **Description:** Write a function that searches for an integer.
- **Prototype:** `int int_index(int *array, int size, int (*cmp)(int));`

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at
- **Description:** Write a program that performs simple operations.
- **Usage:** `calc num1 operator num2`
- **Operators:** + (addition), - (subtraction), * (multiplication), / (division), % (modulo)
- **Example:** `./calc 1 + 1` returns `2`

## Requirements
- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A `README.md` file is mandatory
- Code should use the Betty style
- No global variables are allowed
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`
- Allowed to use `_putchar`
- The prototypes of all functions and `_putchar` should be included in the `function_pointers.h` header file
- Header files should be include guarded

## Quiz Questions
- [Quiz Questions](#quiz-questions) - See the quiz questions and their answers related to function pointers in C.

## Author
- Leonard Ndukuo

## License
This project is open-source and available under the [MIT License](LICENSE).

