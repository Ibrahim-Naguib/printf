#ifndef MY_PRINTF
#define MY_PRINTF
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define LOCAL_BUFFER 1024
#define FLUSH_BUFFER -1

/**
 * struct formatter - Holds a format string and a corresponding function.
 * @fmt: The format string.
 * @f: A function pointer to a function that handles the format.
 */

struct formatter
{
	char *fmt;
	int (*f)(va_list);
};

typedef struct formatter fmt_list;

int _putchar(char c);
int _printf(const char *format, ...);
int handle_specifiers(const char *format, fmt_list func_list[], va_list args);
int print_char(va_list);
int print_string(va_list args);
int print_percent(va_list);
int print_number(va_list args);
int print_int(va_list args);
int print_binary(va_list args);

#endif
