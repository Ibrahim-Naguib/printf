#include "main.h"

/**
 * print_int - Prints an integer using the print_number function.
 *
 * @args: va_list argument containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_int(va_list args)
{
	int n;

	n = print_number(args);
	return (n);
}
