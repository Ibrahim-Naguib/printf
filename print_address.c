#include "main.h"

static void reverse_print(char *str, int length) {
    int start = 0;
    int end = length - 1;
	char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int print_address(va_list args) {
    void* ptr = va_arg(args, void*);
    int chars_printed = 0;
    char hex_buffer[32];
    int temp_index = 0;
	int digit, i;
	unsigned long int value;

    if (ptr == NULL) {
        return _printf("(null)");
    }


    chars_printed += _putchar('0');
    chars_printed += _putchar('x');

    for (value = (unsigned long int)ptr; value > 0; value /= 16) {
        digit = value % 16;
        hex_buffer[temp_index++] = (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
    }

    reverse_print(hex_buffer, temp_index);

    for (i = 0; i < temp_index; i++) {
        chars_printed += _putchar(hex_buffer[i]);
    }

    return chars_printed;
}

