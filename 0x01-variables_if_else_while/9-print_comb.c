#include<stdio.h>
/**
 * main - main function
 * Return: integer
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num <= '8')
		{
			putchar(',');
			putchar('\t');
		}
	}
	putchar('\n');
	return (0);
}
