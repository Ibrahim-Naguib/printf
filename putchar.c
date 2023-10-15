#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */

int _putchar(char c)
{
	static char buffer[LOCAL_BUFFER];
	static int index;

	if (c == FLUSH_BUFFER || index >= LOCAL_BUFFER)
	{
		write(1, buffer, index);
		index = 0;
	}
	if (c != FLUSH_BUFFER)
		buffer[index++] = c;
	return (1);
}
