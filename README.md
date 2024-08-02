# ft_printf

![Language: C](https://img.shields.io/badge/Language-C-blue.svg)
![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)

## Introduction

`ft_printf` is a custom implementation of the `printf` function in C. This library mimics the behavior of the original `printf` function from libc, allowing for formatted output of text. The project is designed to improve understanding of variadic functions and custom output formatting in C.

## Features

- Handles format specifiers: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`.
- Built as a static library (`libftprintf.a`).

## Makefile Commands

- **`make`**: Compiles the project and creates the `libftprintf.a` library.
- **`make clean`**: Removes object files, keeping only the source code.
- **`make fclean`**: Cleans the project by removing the compiled library and object files.
- **`make re`**: Performs a full recompilation by cleaning and then recompiling the project.

## Usage

Here is an example of using `ft_printf` in a C program:

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, World!\n");
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "This is a string");
    ft_printf("Pointer: %p\n", (void *)0x1234);
    ft_printf("Decimal: %d\n", 123);
    ft_printf("Integer: %i\n", -456);
    ft_printf("Unsigned: %u\n", 789);
    ft_printf("Hexadecimal (lowercase): %x\n", 255);
    ft_printf("Hexadecimal (uppercase): %X\n", 255);
    ft_printf("Percent sign: %%\n");

    return 0;
}
```

## Screenshot

<img width="218" alt="Capture d’écran 2024-08-02 à 02 34 22" src="https://github.com/user-attachments/assets/4f4ed4c8-7101-40e3-b864-2a7e36990aaa">

