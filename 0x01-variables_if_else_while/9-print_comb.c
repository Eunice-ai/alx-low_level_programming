#include <stdio.h>

/**
 * main - Entry point
 * Description: Print possible combination of
 * single-digit numbers
 * Return: Success (0)
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
