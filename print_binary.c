#include "main.h"

/**
 * print_binary - Converts an unsigned integer to binary and prints it.
 * @args: A va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int print_binary(va_list args) {
	unsigned int num = va_arg(args, unsigned int);
	int i, index = 0, result = 0;
	char binary[32];

	if (num == 0) {
		_putchar('0');
		return (1);
	}

	while (num > 0) {
		binary[index++] = (num % 2) + '0';
		num /= 2;
	}

	for (i = index - 1; i >= 0; i--) {
		_putchar(binary[i]);
		result++;
	}
	return (result);
}
