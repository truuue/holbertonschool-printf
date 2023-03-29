#include "main.h"

/**
* _printf - print output to stdout
* @format: A string containing all characteres
* Return: the number of charac printed
*/

int _printf(const char *format, ...)
{
va_list args;
int i = 0, printed_chars = 0;

if (format == NULL)
return (-1);

va_start(args, format);
while (format && format[i])
{
if (format[i] == '%')
{
i++;
if (format[i] == '\0')
{
break;
}
printed_chars += handle_format_specifier(format[i], args);
}
else
{
putchar(format[i]);
printed_chars++;
}
i++;
}
va_end(args);
return (printed_chars);
}
