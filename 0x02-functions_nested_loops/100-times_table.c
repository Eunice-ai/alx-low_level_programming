#include "main.h"

/**
 * print_times_table - function
 * Description: prints the n times table,
 * starting with 0
 * @n: maximum number
 * Return: true (0)
 */
void print_times_table(int n)
{
	int w, x, y, z, op;

	for (w = 0; w <= n; w++)
	{
		if (n < 0 || n > 15)
		{
			break;
		}
		_putchar(48);
		for (x = 1; x <= n; x++)
		{
			op = w * x;
			_putchar(44);
			_putchar(32);
			if (op <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(op + 48);
			}
			else if (op > 9 && op < 100)
			{
				_putchar(32);
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);
			}
			else
			{
				y = op / 10;
				z = y / 10;
				_putchar(z + 48);
				_putchar((y % 10) + 48);
				_putchar((op % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
