#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the n times table
 * Return: Success (0)
 */
int main(void)
{
	int sum = 0, b;

	for (b = 0; b < 1024; b++)
	{
		if (b % 3 == 0 || b % 5 == 0)
		{
			sum += b;
		}
	}
	printf("%d\n", sum);
	return (0);
}
