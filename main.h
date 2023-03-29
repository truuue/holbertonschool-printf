#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print_handler - handles printing functions
 * @type: the type of print function
 * @func: a pointer to the print function
 */

typedef struct print_handler
{
char type;
int (*func)(va_list);
} print_handler;


/* printf.c */

int _printf(const char *format, ...);

/* printers */

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list list);
int _putchar(char c);

/* handlers */

int handle_format_specifier(char specifier, va_list args);

#endif
