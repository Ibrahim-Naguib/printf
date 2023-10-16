#include "main.h"

/**
 * print_rot13 - Prints a rot13'ed string.
 * @args: va_list argument containing the string to be transformed and printed.
 *
 * Return: The number of characters printed.
 */

int print_rot13(va_list args)
{
	int i, j, chars_printed = 0;
	int replaced = 0;
	char *str = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char alpha2[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		replaced = 0;
		for (j = 0; alpha[j] && !replaced; j++)
		{
			if (str[i] == alpha[j])
			{
				_putchar(alpha2[j]);
				chars_printed++;
				replaced = 1;
			}
		}
		if (!replaced)
		{
			_putchar(str[i]);
			chars_printed++;
		}
	}
	return (chars_printed);
}
