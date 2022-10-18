#include <stdio.h>


/**
 * main - Entry
 * Description: Print all single digit number
 * of base 10, starting from zero
 * Return: Success (0)
 */

int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
		putchar((numb % 10) + '0');

	putchar('\n');

	return (0);
}
