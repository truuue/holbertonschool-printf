#include "holberton.h"

/**
 * print_char - Imprime un caractère sur la sortie standard
 * @args: Liste d'arguments
 *
 * Return: Nombre de caractères imprimés
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
return (write(1, &c, 1));
}

/**
 * print_string - Imprime une chaîne de caractères sur la sortie standard
 * @args: Liste d'arguments
 *
 * Return: Nombre de caractères imprimés
 */
int print_string(va_list args)
{
char *str = va_arg(args, char *);
int len = 0;

if (str == NULL)
str = "(null)";

while (str[len] != '\0')
len++;

return (write(1, str, len));
}

/**
 * print_percent - Imprime un caractère '%' sur la sortie standard
 * @args: Liste d'arguments
 *
 * Return: Nombre de caractères imprimés
 */
int print_percent(va_list args)
{
(void)args;
return (write(1, "%", 1));
}
