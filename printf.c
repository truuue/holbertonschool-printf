#include "holberton.h"
/**
 * _printf - Imprime une sortie formatée sur la sortie standard
 * @format: Chaîne de formatage
 *
 * Return: Nombre de caractères imprimés (hors octet nul)
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, len = 0;
if (format == NULL)
return (-1);
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
len += print_char(args);
break;
case 's':
len += print_string(args);
break;
case '%':
len += print_percent(args);
break;
default:
len += write(1, "%", 1);
len += write(1, &format[i], 1);
break;
}
i++;
}
else
{
len += write(1, &format[i], 1);
i++;
}
}
va_end(args);
return (len);
}
