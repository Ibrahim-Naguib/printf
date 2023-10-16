#include "main.h"

/**
 * print_address - Prints a memory address in hexadecimal format.
 *
 * @args: va_list argument containing the pointer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_address(va_list args)
{
	void *ptr = va_arg(args, void*);
	int chars_printed = 0, temp_index = 0, digit, i;
	char hex_digits[16] = "0123456789abcdef";
	char temp_buffer[32];
	unsigned long int value;

	if (ptr == NULL)
		return (_printf("(null)"));

	chars_printed += _putchar('0');
	chars_printed += _putchar('x');


	for (value = (unsigned long int)ptr; value > 0; value /= 16)
	{
		digit = value % 16;
		temp_buffer[temp_index++] = hex_digits[digit];
	}

	for (i = temp_index - 1; i >= 0; i--)
		chars_printed += _putchar(temp_buffer[i]);
	return (chars_printed);
}

