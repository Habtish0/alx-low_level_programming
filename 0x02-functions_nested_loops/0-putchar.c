#include "main.h"

/**
 * main - prints _putchar, followed by a new line.
 * Return: 0
**/

int main(void)
{
	unsigned int i;
	char c[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a'); 
	_putchar('r')
	_putchar('\n');


	return (0);
}
