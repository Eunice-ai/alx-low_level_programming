#include "main.h"

/**
 * print_sign - function
 *
 * @n: number to check
 * Return: true (0)) or false (1) or (-1);
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
