#include "main.h"

/**
 * print_custom_string - Prints a string with non-printable characters
 * represented as \x followed by the ASCII code value in uppercase hexadecimal.
 *
 * @args: va_list argument containing the string to be printed.
 *
 * Return: The number of characters printed.
 */

int print_custom_string(va_list args)
{
	char *str;
	int i, chars = 0;

	str = va_arg(args, char*);
	if (str == NULL)
		return (_printf("(null)"));

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			chars += _putchar('\\');
			chars += _putchar('x');
			chars += _putchar((str[i] / 16) + ((str[i] / 16 < 10) ? '0' : 'A' - 10));
			chars += _putchar((str[i] % 16) + ((str[i] % 16 < 10) ? '0' : 'A' - 10));
		}
		else
			chars += _putchar(str[i]);
	}
	return (chars);
}

