#include <stdio.h>

/**
 * main - Entry point
 * Description: print lowercas alphabet in reverse
 * Return: Success always 0
 */

int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);

	putchar('\n');

	return (0);
}
