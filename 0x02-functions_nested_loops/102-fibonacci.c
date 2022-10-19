#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the first 50 fibonacci numbers
 * starting with 1 and 2, followed by a new line
 * Return: Success (0)
 */
int main(void)
{
	long int a, b, sum;
	int z;

	sum = 0;
	a = 1;
	b = 0;

	for (z = 0; z < 50; z++)
	{
		b = a;
		a += sum;
		sum = b;
		if (z == 49)
		{
			printf("%ld\n", a);
		}
		else
		{
			printf("%ld, ", a);
		}
	}
	return (0);
}
