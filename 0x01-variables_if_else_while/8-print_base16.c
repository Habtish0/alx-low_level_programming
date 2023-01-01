#include<stdio.h>
/**
 * main - the starting of function
 * Return: integer
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}
	return (0)
}
