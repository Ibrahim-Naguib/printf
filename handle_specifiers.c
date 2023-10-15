#include "main.h"

/**
 * handle_specifiers - Process format specifiers in the format string.
 * @format: The format string to process.
 * @func_list: The array of format specifier functions.
 * @args: A va_list of arguments to be printed.
 *
 * Return: The total number of characters printed.
 */

int handle_specifiers(const char *format, fmt_list func_list[], va_list args)
{
	int i, j, r_val, printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; func_list[j].fmt != NULL; j++)
			{
				if (format[i + 1] == func_list[j].fmt[0])
				{
					r_val = func_list[j].f(args);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (func_list[j].fmt == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}

	return (printed_chars);

}
