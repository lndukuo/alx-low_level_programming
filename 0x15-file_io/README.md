# 0x15. C - File I/O

This project is centered around the exploration and understanding of File Input/Output operations in the C programming language, particularly focusing on system calls and file manipulation techniques.

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- How to create, open, close, read, and write files
- What file descriptors are and their significance
- Understanding the purposes and POSIX names of the three standard file descriptors
- How to use the I/O system calls open, close, read, and write
- Insight into the flags O_RDONLY, O_WRONLY, O_RDWR and their uses
- Understanding file permissions and their implementation when creating a file with the open system call
- Understanding what a system call is and its distinction from a function

## Requirements

- Allowed editors: vi, vim, emacs
- All files should be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file at the root of the project folder is mandatory
- Code should use the Betty style
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit
- Allowed syscalls: read, write, open, close
- You are allowed to use _putchar
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- All header files should be include guarded

## Tasks

The project consists of the following tasks:

### 0. Tread lightly, she is near
In this task, the goal is to implement a function that reads a text file and prints it to the POSIX standard output. The function should take in a filename and the number of letters it should read and print. It is expected to return the actual number of letters it could read and print. Various conditions need to be handled, such as cases where the file can't be opened or read, if the filename is NULL, or if writing fails.

### 1. Under the snow
For this task, the objective is to create a function that can create a file. The function should take in the filename and a text content string as parameters. If successful, the function should return 1; otherwise, it should return -1. The file created must have specific permissions (rw-------), and if the file already exists, the function should truncate it. Conditions for handling cases where the filename or text_content is NULL must also be considered.

### 2. Speak gently, she can hear
In this task, the aim is to create a function that appends text at the end of a file. The function should take the filename and a text content string as parameters. It should return 1 on success and -1 on failure. The function should not create the file if it doesn't exist and if the text_content is NULL, it should not add anything to the file. The conditions for handling existing files, permissions, and NULL parameters need to be carefully managed.

### 3. cp
The objective of this task is to write a program that copies the content of one file to another file. The program should take the file_from and file_to as command-line arguments. If the number of arguments is not correct, it should exit with code 97. Various conditions need to be handled, such as truncating file_to if it already exists, checking if file_from exists and can be read, and ensuring successful writing to file_to. The created file must have specific permissions (rw-rw-r--).

Each task is essential for understanding and mastering various aspects of file I/O operations, including reading, creating, and copying files, as well as managing permissions and handling errors effectively.
