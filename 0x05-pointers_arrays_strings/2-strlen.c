#include <stdio.h>

/**
 * _strlen - returns the length of a screen
 * @s: the string to get the length
 * Return: the length of @str
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
