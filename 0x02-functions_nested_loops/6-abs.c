#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer.
 * @num: any integer number.
 * Return: integer value.
 */

int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	else
	{
		num = num;
	}
	return (num);
}
