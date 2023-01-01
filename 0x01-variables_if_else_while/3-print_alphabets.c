#include <stdio.h>
/**
 * main - is the where the main function starts
 * Return: it returns void value
 */

int main(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }
        for (ch = 'A'; ch <= 'Z'; ch++)
        {
                putchar(ch);
        }
        
        putchar('\n');
        return (0);
}

