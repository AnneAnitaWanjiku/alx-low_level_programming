#include "main.h"

/**
 *  _strncat - concatenate two strings
 *  using at most n bytes from src
 *  @dest: first input value
 *  @src: secondinput value
 *  @n: third input value
 *  Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		i++;
		j++;
	}
	dest[i] = src[j];
	return (dest);
}
