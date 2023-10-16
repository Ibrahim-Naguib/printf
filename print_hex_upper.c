#include "main.h"

/**
 * print_hex_upper - Prints an unsigned integer in uppercase hex format.
 * @args: va_list argument containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_hex_upper(va_list args)
{
	unsigned int num;
	int nums_printed = 0, index = 0, i, digit;
	char hex[32];

	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		digit = num % 16;
		hex[index++] = (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
		num /= 16;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(hex[i]);
		nums_printed++;
	}

	return (nums_printed);
}

