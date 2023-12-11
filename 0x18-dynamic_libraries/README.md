# Dynamic Libraries

## Overview

This project focuses on understanding and implementing dynamic libraries in C, emphasizing concepts such as library creation, usage, and related tools. The primary goal is to gain a deep understanding of dynamic libraries and their integration into C programs.

## Learning Objectives

1. **Dynamic Libraries:**
   - Understand what dynamic libraries are and how they function.
   - Learn how to create dynamic libraries using C.

2. **$LD_LIBRARY_PATH:**
   - Familiarize yourself with the `$LD_LIBRARY_PATH` environment variable.
   - Explore how to utilize `$LD_LIBRARY_PATH` for dynamic library path management.

3. **Static vs. Shared Libraries:**
   - Differentiate between static and shared libraries.
   - Understand the advantages and disadvantages of each type.

4. **Basic Usage of Tools:**
   - Learn to use essential tools such as `nm` for listing symbols, `ldd` for displaying library dependencies, and `ldconfig` for updating the library cache.

## Requirements

### C:
- Use allowed editors (vi, vim, emacs).
- Compile using `gcc` on Ubuntu 20.04 LTS with options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Follow the Betty style guidelines.
- Restrict global variables and standard library functions (except `_putchar`).
- Limit functions to no more than 5 per file.

### Bash:
- Use allowed editors (vi, vim, emacs).
- Ensure all files end with a new line.
- Start scripts with `#!/bin/bash`.
- Provide a README.md explaining each script's purpose.
- Ensure all files are executable.

## Project Structure

- `src/`: Contains C source files for dynamic libraries.
- `scripts/`: Holds Bash scripts for additional functionalities.
- `README.md`: Project documentation.

