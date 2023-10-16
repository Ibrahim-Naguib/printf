#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer in decimal format.
 * @args: va_list argument containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_unsigned(va_list args)

{
	int check, nums_printed = 0;
	unsigned int num;

	check = 1;
	num = va_arg(args, unsigned int);

	for (; num / check > 9; )
		check *= 10;
	for (; check != 0; )
	{
		nums_printed += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}
	return (nums_printed);
}
