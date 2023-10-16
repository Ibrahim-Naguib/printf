#include "main.h"

/**
 * print_octal - Prints an unsigned integer in octal format.
 * @args: va_list argument containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_octal(va_list args)
{
	int i, nums_printed = 0;
	unsigned int num;
	int index = 0;
	char octal[32];

	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		octal[index++] = (num % 8) + '0';
		num /= 8;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(octal[i]);
		nums_printed++;
	}

	return (nums_printed);
}
