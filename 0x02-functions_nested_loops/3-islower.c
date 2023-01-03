#include "main.h"
/**
 * _islower - checks for lowercase characters.
 * @c: character to be checked.
 * Return: '1' if the character is lower case otherwise '0'.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
