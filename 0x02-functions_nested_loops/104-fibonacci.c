#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b1, b2;
	long int num1, num2, num3, num4, fib1, fib2;

	num1 = 1;
	num2 = 2;
	b1 = b2 = 1;
	printf("%ld, %ld", num1, num2);
	for (a = 0; a < 96; a++)
	{
		if (b1)
		{
			fib1 = num1 + num2;
			printf(", %ld", fib1);
			num1 = num2;
			num2 = fib1;
		}
		else
		{
			if (b2)
			{
				num3 = num1 % 1000000000;
				num4 = num2 % 1000000000;
				num1 = num1 / 1000000000;
				num2 = num2 / 1000000000;
				b2 = 0;
			}
			fib2 = (num3 + num4);
			fib1 = num1 + num2 + (fib2 / 1000000000);
			printf(", %ld", fib1);
			printf("%ld", fib2 % 1000000000);
			num1 = num2;
			num3 = num4;
			num2 = fib1;
			num4 = (fib2 % 1000000000);
		}
		if (((num1 + num2) < 0) && b == 1)
		b = 0;
	}
			printf("\n");
			return (0);
}
