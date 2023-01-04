#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: memory where is copied
 * @src: memory where is stored
 * @n: number of bytes
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
