#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - this is main function.
 * description - the starting of the function
 * Return: void value
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d, is postive");
	}
	else if (n == 0)
	{
		printf("%d, is zero");
	}
	else
	{
		printf("%d, is negative");
	}
	/* your code goes there */
	return (0);
}
