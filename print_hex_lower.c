#include "main.h"

/**
 * print_hex_lower - Prints an unsigned integer in lowercase hex format.
 * @args: va_list argument containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_hex_lower(va_list args)
{
	unsigned int num;
	int index = 0, digit, i, nums_printed = 0;
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
		hex[index++] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
		num /= 16;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(hex[i]);
		nums_printed++;
	}

	return (nums_printed);
}

