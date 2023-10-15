#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @args: va_list argument containing the integer to be printed.
 * Return: the number of characters printed.
 */

int print_number(va_list args)

{
	int n, check, nums_printed = 0;
	unsigned int num;

	n  = va_arg(args, int);
	check = 1;

	if (n < 0)
	{
		nums_printed += _putchar('-');
		num = n * -1;
	}
	else
		num = n;
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
