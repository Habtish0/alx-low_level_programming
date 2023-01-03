#include "main.h"
/**
 * _isalpha -  a function that checks for alphabetic character.
 * @c: the character to be checked.
 * Return: 1 if c is a letter, lowercase or uppercase otherwise return 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		c = 1;
	}
	else 
	{
		c = 0;
	}
	return (c);
}
	
