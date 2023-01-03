#include "main.h"
/**
 * int print_last_digit - a function that prints the last digit of a number.
 * @num: any integer number.
 * Return: the last digit of num.
 */

int print_last_digit(int num)
{
	num = num % 10;
	if (num < 0)
	{
		num = num * -1;
	}
		num = _putchar(num + '0');
		return (num);
}
