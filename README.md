# This is an implementation of printf() function in C programing language

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/ThapeloK/printf)

## Synopsis

The **_printf()**  project is a peer based ALX-Holberton school project where printf() from standard library is simulated.

Table of contents
=================

<!--ts-->
   * [Synopsis](#synopsis)
   * [Table of contents](#table-of-contents)
   * [General Requirements](#general-requirements)
   * [Authorized functions and macros](#authorized-functions-and-macros)
   * [Description of Format Specifiers](#format-specifiers)
   * [How to Compilation](#how-to-/-compilation)
   * [Authors](#authors)
<!--te-->

******************************************************************************

## General Requirements

- Allowed editors: **vi**, **vim**, **emacs**
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with **gcc 4.8.4** using the flags **-Wall -Werror -Wextra and -pedantic**
- All your files should end with a new line
- A **README.md** file, at the root of the folder of the project is mandatory
- Your code should use the **Betty** style. It will be checked using **betty-style.pl** and **betty-doc.pl**
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the **main.c** files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own main.c files at compilation. Our **main.c** files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called **holberton.h**
- Dont forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project

******************************************************************************


## Authorized functions and macros

  - `write (man 2 write)`
  - `malloc (man 3 malloc)`
  - `free (man 3 free)`
  - `va_start (man 3 va_start)`
  - `va_end (man 3 va_end)`
  - `va_copy (man 3 va_copy)`
  - `va_arg (man 3 va_arg)`


******************************************************************************

## Description of Format Specifiers Done

Function name | Description | Format Specifier


--- | --- | ---
`print_char` | Prints a character | `%c`
`print_int` | Prints an integer | `%i`
`print_string` | Prints a string | `%s`
`print_dec` | Prints decimal | `%d`

******************************************************************************

## How to /Compilation

- Compile the files using Ubuntu 14.04 LTS version ideally, but any Linux distribution can work
- Code can be compiled this way:

        $ gcc -Wall -Werror -Wextra -pedantic *.c

- Include the holberton.h file

        #include holberton.h

******************************************************************************

## Authors :couple:
* Thapelo Khantsi @[ThapeloK](https://github.com/ThapeloK)}

* Wanjiku Karugi @[kaci65] (https://github.com/kaci65)

## License

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.