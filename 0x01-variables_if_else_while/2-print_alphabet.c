#include <stdio.h>

/**
 * main - Entry
 * Description: Prints alphabets in lower case
 * Return: Success (0)
 */

int main(void)
{
	char i;

	for (i = "a"; i <= "z"; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
