#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);
int print_perc(va_list);
int reverse_str(char *s);
int print_uint(unsigned int n);
int print_int(va_list);
int print_hex(unsigned long int n);
int print_ptr(va_list args);
int print_unsigned(va_list args);
int print_address(va_list args);

/**
 * struct print_format - Struct for print format
 * @type: Type of format
 * @f: Print function
 */
typedef struct print_format
{
	char type;
	int (*f)(va_list);
} print_t;

#endif
