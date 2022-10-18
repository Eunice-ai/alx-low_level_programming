#include <stdio.h>

/**
 * main - prints possible diff combo of two digits
 * Description: print numbers
 * Return: Success (0)
 */
int main(void)
{
	int a, b, c;

	a = 48;
	b = 49;
	c = 0;
	while (b < 58)
	{
		if (c == 1)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(a);
		putchar(b++);
		c = 1;
		if (b == 58)
		{
			a++;
			b = a + 1;
			if (a == 58)
			{
				break;
			}
		}
	}
	putchar('\n');
	return (0);
}
