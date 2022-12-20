#include "main.h"

/**
 *puts2 - prints every char of a string
 *@str: the string to be checked
 */
void puts2(char *str)
{
	int i;

	int i = 0;
	while (str[i] != '\0')
	{
	if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	i++;
	}
		_putchar('\n');
}
