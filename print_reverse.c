#include "main.h"

/**
 * print_reverse - Prints a reversed string using va_list.
 *
 * @args: va_list argument containing the string to be printed in reverse.
 *
 * Return: The number of characters printed.
 */

int print_reverse(va_list args)
{
	const char *str = va_arg(args, const char *);
	int chars_printed = 0, length = 0, i;

	if (str == NULL)
	{
		return (_printf("(null)"));
	}

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		chars_printed += _putchar(str[i]);
	}

	return (chars_printed);
}
