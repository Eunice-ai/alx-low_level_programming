#include <stdio.h>


/**
 * main - Entry
 * Description: Print all single digit number
 * of base 10, starting from zero
 * Return: Success (0)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number++);
	}
	putchar('\n');
	return (0);
}
