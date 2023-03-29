#include "main.h"
#include <math.h>

/**
* print_integer - Prints an integers
* @args: va_list containing an int argument to be printed
* Return: The number of characters printed
*/

int print_int(va_list args)
{
int digit;
int num_digits;  
int i;
int num = va_arg(args, int);
int printed_chars = 0;
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
num_digits = log10(num) + 1;
for (i = 0; i < num_digits; i++)
{
digit = (num / (int)pow(10, num_digits - i - 1)) % 10;
putchar(digit + '0');
printed_chars++;
}
return (printed_chars);
}