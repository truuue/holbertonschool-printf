#include "main.h"

/**
* print_char - Prints a single character
* @args: va_list containing a char argument to be printed
* Return: The number of characters printed
*/

int print_char(va_list args)
{
char c = va_arg(args, int);
putchar(c);
return (1);
}

/**
* print_str - Prints a string
* @args: va_list containing a argument of const char * pointing to the string to be printed
* Return: The number of characters printed
*/

int print_str(va_list args)
{
const char *str = va_arg(args, const char *);
int printed_chars = 0;
while (*str)
{
putchar(*str++);
printed_chars++;
}
return (printed_chars);
}

/**
* print_percent - Prints a single percentage sign
* @args: va_list
* Return: 1
*/

int print_percent(va_list args __attribute__((unused)))
{
putchar('%');
return (1);
}