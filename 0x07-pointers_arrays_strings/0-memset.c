#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: the constant byte
 * @n: bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
		s[i] = b;
	n--;
	return (s);
}
