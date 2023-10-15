#include "main.h"

/**
 * print_char - Print a character.
 * @args: A va_list containing the character to be printed.
 *
 * Return: The number of characters printed.
 */

int print_char(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	_putchar(ch);
	return (1);
}

