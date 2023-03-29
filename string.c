#include "main.h"


/**
 * print_int - Prints an integer to stdout
 * @args: va_list containing the integer to print
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
int digit, num = va_arg(args, int);
int printed_chars = 0, divisor = 1;

if (num < 0)
{
putchar('-');
num = -num;
printed_chars++;
}

if (num == 0)
{
putchar('0');
return (1);
}


while (num / divisor >= 10)
divisor *= 10;


while (divisor != 0)
{
digit = num / divisor;
num %= divisor;
divisor /= 10;
putchar(digit + '0');
printed_chars++;
}

return (printed_chars);
}
