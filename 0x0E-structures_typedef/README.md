# 0x0E. C - Structures, typedef

## Project Overview
This project is part of the ALX Software Engineering program and focuses on understanding and working with C structures and typedefs.

## Learning Objectives
By completing this project, you will learn:

- What structures are and how to define them
- How to use `typedef` to create custom data types
- How to work with structures in C
- How to initialize, print, create, and free structures

## Requirements
- **Allowed Editors:** vi, vim, emacs
- **Compilation Environment:** Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **File Ending:** All files should end with a new line
- **Coding Style:** Your code should use the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- **Global Variables:** Not allowed
- **Functions Per File:** No more than 5 functions per file
- **Allowed C Standard Library Functions:** `printf`, `malloc`, `free`, `exit`
- **Header Files:** All header files should be include guarded

## Tasks
### Task 0: Poppy
Define a new type `struct dog` with the following elements:
- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

### Task 1: A dog is the only thing on earth that loves you more than you love yourself
Write a function that initializes a variable of type `struct dog`.
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

### Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
Write a function that prints a `struct dog`.
- Prototype: `void print_dog(struct dog *d);`
- Format: See the example in the task description.

### Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog, it's too dark to read
Define a new type `dog_t` as a new name for the type `struct dog`.

### Task 4: A door is what a dog is perpetually on the wrong side of
Write a function that creates a new `struct dog`.
- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- Return NULL if the function fails.

### Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Write a function that frees dogs.
- Prototype: `void free_dog(dog_t *d);`

## Usage
To compile and run each task, you can use the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [source_file.c] -o [output_binary]
./[output_binary]

