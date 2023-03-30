#include "main.h"

/**
 * _printf - Custom printf function that prints output format
 * @format: Format string to be printed
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
print_t form[] = {
{'c', print_char},
{'s', print_str},
{'d', print_int},
{'i', print_int},
{'%', print_perc},
{'\0', NULL}
};
int i = 0, x = 0;
int count = 0;
va_list args;

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

while (format[i] != '\0')
{
if (format[i] == '%')
{
while (form[x].type != '\0')
{
if (format[i + 1] == form[x].type)
{
count += form[x].f(args);
i += 2;
x = 0;
break;
}
x++;
}
if (form[x].type == '\0')
{
count += _putchar(format[i]);
i++;
x = 0;
}
}
else
{
count += _putchar(format[i]);
i++;
}
}
va_end(args);
return (count);
}
