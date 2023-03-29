#include "main.h"

/**
* print_char - Prints a single character
* @args: va_list containing a char argument to be printed
* Return: The number of characters printed
*/

int print_char(va_list args)
{
putchar(va_arg(args, int));
return (1);
}
/**
* print_string - Prints a string
* @args: va_list containing a argument
* Return: The number of characters printed
*/

int print_string(va_list args)
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
 * print_int - Print an integer
 * @args: A va_list containing the integer to print
 *
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
int n = va_arg(args, int);
return (printf("%d", n));
}
