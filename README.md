# ft_printf

The ft_printf is an implementation of the printf function in C, developed as part of the 42 school's standard library. It allows you to format and print data to the standard output or a character string.

## Features

- Supports a wide range of format specifiers: **'%c'**, **'%s'**, **'%p'**, **'%d'**, **'%u'**, **'%x'**, **'%X'**.
- Handles different data types.
- It also returns a counter with the numbers of characters contained in the string.

## Usage

To use 'ft_printf' in your project:

1.- Clone the repository or include the 'ft_printf' source files in your project.

2.- Include the header file 'ft_printf' in your source code.

3.- Compile your project, linking the 'ft_printf' source files.

Here is a simple demonstration of how to use it:

    #include  "ft_printf.h"

    int main(void)
    {
        ft_printf("%X", -42);
        return (0):
    }
