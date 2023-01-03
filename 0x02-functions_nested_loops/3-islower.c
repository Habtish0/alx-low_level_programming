#include "main.h"
/**
 * _islower - checks for lowercase characters
 * Return: integer
 */

int _islower(int c)
{
	if (c >='a' && c <= 'z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
