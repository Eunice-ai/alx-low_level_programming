#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
	char i = 'a';
	int c = 0;

	while (c < 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		c++;
		i = 'a';
	}
}
