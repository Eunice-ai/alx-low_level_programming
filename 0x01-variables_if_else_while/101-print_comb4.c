#include <stdio.h>

/**
 * main - Entry point
 * Description: print possible diff combo if three digits
 * Return: success (0)
 */

int main(void)
{
	int a = 48, b = 49, c = 50, d = 0;

	while (a < 56)
	{
		while (b < 57)
		{
			while (c < 58)
			{
				if (d == 1)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(a);
				putchar(b);
				putchar(c);
				c++;
				d = 1;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	putchar('\n');
	return (0);
}
