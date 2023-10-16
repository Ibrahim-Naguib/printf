#include "main.h"
/**
 * print_rot13 - Prints a rot13'ed string.
 * @args: va_list argument containing the string to be transformed and printed.
 *
 * Return: The number of characters printed.
 */
int print_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int chars_printed = 0, i;
	char *copy = _strdup(str);
	char *rot;
	char *nill = ("nil");

	if (str == NULL)
	{
		for (i = 0; nill[i] != '\0'; i++)
		{
			chars_printed += _putchar(nill[i]);
		}
		return (chars_printed);
	}

	rot = _rot13(copy);
	
	for (i = 0; rot[i] != '\0'; i++)
		chars_printed += _putchar(rot[i]);
	free(copy);

	return (chars_printed);
}
