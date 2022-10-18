#include <stdio.h>

/**
 * main - Entry point
 * Decription: print all numbers of base 16
 * in lowercase
 * Return: Success(0)
 */

int main(void)
{
	int numb;
	char lc;

	for (numb = 0; numb < 10; numb++)
		putchar((num % 10) + '0');

	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);

	putchar('\n');

	return (0);
}
