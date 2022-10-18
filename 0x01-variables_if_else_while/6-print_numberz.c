#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Description: Print all single digit number
 * of base 10, starting from zero
 * Return: Success (0)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar("%d", number);
	}
	putchar('\n');
	return (0);
}
