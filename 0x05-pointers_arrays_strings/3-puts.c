#include "main.h"

/**
 *_puts - puts a string
 *@str: the string to print
 *Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
