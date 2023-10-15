#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */

int _putchar(char c)
{
	char buffer[LOCAL_BUFFER];
	int index = 0;

	if (buffer_index == LOCAL_BUFFER)
	{
		write(1, buffer, LOCAL_BUFFER);
		index = 0;
	}
	buffer[index++] = c;
	return (1);
}
