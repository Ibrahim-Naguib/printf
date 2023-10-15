#include "main.h"

/**
 * print_string - Print a string.
 * @args: A va_list containing the string to be printed.
 *
 * Return: The number of characters printed.
 */

int print_string(va_list args)
{
	int i;
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
