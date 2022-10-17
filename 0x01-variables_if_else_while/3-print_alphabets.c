#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Description: print the alphabet in lowercase,
 * and uppercase.
 * Return: Success always (0)
 */
int main(void)
{
	char i = 'a', j = 'A';

	while (i <= 'z')
		putchar(i++);
	while (j <= 'Z')
		putchar(j++);
	putchar('\n');
	return (0);
}
