#include "main.h"

/**
 * _printf - Custom printf implementation with variable arguments.
 * @format: A format string that specifies how to format the output.
 * @...: Variable number of arguments based on the format string.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	int printed_chars;

	fmt_list func_list[] =	{
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_number},
		{"i", print_int},
		{"b", print_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex_lower},
		{"X", print_hex_upper},
		{"S", print_custom_string},
		{"p", print_address},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	printed_chars = handle_specifiers(format, func_list, args);
	_putchar(FLUSH_BUFFER);
	va_end(args);

	return (printed_chars);
}
