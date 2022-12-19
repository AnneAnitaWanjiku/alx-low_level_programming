#include "main.h"


/**
 * _isupper - checks if parameter is an uppercase character
 * @c: input character
 * Return: 1 if c is  uppercase character, 0 in other case.
 */
int _isupper(int c)
{
	if ((c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
