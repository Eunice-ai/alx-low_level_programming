#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success (0)
 */

int main(void)
{
	long int a, b, sum, summ;

	sum = 0;
	a = 1;
	b = 0;
	summ = 0;

	while (a <= 4000000)
	{
		b = a;
		a += sum;
		sum = b;

		if (a % 2 == 0)
		{
			summ += a;
		}
	}
	printf("%ld\n", summ);
	return (0);
}
