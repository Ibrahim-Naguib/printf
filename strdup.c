#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: a pointer to the newly allocated duplicated string, or NULL
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *dup;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
	{
		i++;
		size++;
	}
	dup = malloc(size * sizeof(*str) + 1);

	if (dup == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}
	dup[size] = '\0';
	return (dup);
}
