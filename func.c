#include "main.h"

/**
 * _putchar - Writes the character
 * @c: The printed character
 * Return: 1 Always success, -1 if error
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

/**
 * print_char - Prints a character
 * @args: va_list containing the character to be printed
 * Return: The number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_str - Prints a string
 * @args: a va_list containing a single argument of type char*
 * Return: Number of characters printed
 */
int print_str(va_list args)
{
	char *s = va_arg(args, char *);
	char *null = "(null)";
	int count = 0;

	if (s == NULL)
		return (write(1, null, strlen(null)));

	while (*s != '\0')
	{
		count += _putchar(*s);
		s++;
	}

	return (count);
}

/**
 * print_perc - Prints a percent symbol
 * @args: Argument list
 * Return: Number of characters printed (always 1)
 */
int print_perc(va_list args)
{
  (void)args;
  _putchar('%');
  return (1);
}

/**
 * reverse_str - Reverses a string in place
 * @s: Pointer to the string to be reversed
 * Return: Always 0
 */
int reverse_str(char *s)
{
  int i, x;
  char temp;
  x = strlen(s) - 1;
  
  for (i = 0; i < x; i++, x--)
  {
    temp = s[i];
    s[i] = s[x];
    s[x] = temp;
  }
  return 0;
}

/**
 * print_unsigned - Prints an unsigned integer
 * @args: Argument list containing the integer to print
 * Return: Number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int div = 1;
	int len = 0;

	while (n / div > 9)
		div *= 10;
	while (div != 0)
	{
		len += _putchar((n / div) % 10 + '0');
		div /= 10;
	}
	return (len);
}

/**
 * print_address - Prints the address of a pointer argument
 * @args: va_list containing the pointer argument to print
 * Return: Number of characters printed
 */
int print_address(va_list args)
{
	void *p = va_arg(args, void *);
	unsigned long int n = (unsigned long int) p;
	unsigned long int hex = n;
	int len = 0;

	len += _putchar('0');
	len += _putchar('x');
	if (hex == 0)
	{
		len += _putchar('0');
		return (len);
	}
	while (hex != 0)
	{
		if (hex % 16 < 10)
			len += _putchar(hex % 16 + '0');
		else
			len += _putchar(hex % 16 + 'a' - 10);
		hex /= 16;
	}
	return (len);
}

/**
 * print_hex - Prints a hexadecimal number
 * @n: Unsigned long integer to be printed in hexadecimal
 * Return: Number of characters printed
 */
int print_hex(unsigned long int n)
{
  int len = 0;

  if (n / 16)
    len += print_hex(n / 16);

  if (n % 16 < 10)
    len += _putchar(n % 16 + '0');
  else
    len += _putchar(n % 16 + 'a' - 10);

  return (len);
}

/**
 * print_ptr - Prints a pointer
 * @args: Argument list containing the pointer to print
 * Return: Number of characters printed
 */
int print_ptr(va_list args)
{
  void *p = va_arg(args, void *);
  unsigned long int num = (unsigned long int)p;
  int len = 0;

  len += _putchar('0');
  len += _putchar('x');

  if (num == 0)
  {
    len += _putchar('0');
    return (len);
  }

  len += print_hex(num);

  return (len);
}

/**
 * print_uint - Prints an unsigned int
 * @n: The unsigned int to print
 * Return: The number of characters printed
 */
int print_uint(unsigned int n)
{
  int len = 0;

  if (n / 10)
    len += print_uint(n / 10);

  len += _putchar(n % 10 + '0');

  return (len);
}

/**
 * print_int - Prints an integer
 * @args: The argument list
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
  int n = va_arg(args, int);
  int len = 0;
  unsigned int num;

  if (n < 0)
  {
    len += _putchar('-');
    num = -n;
  }
  else
    num = n;

  len += print_uint(num);

  return (len);
}
