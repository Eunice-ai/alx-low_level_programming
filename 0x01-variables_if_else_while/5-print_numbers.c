#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Description: print all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Success 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
		printf("%d", num++);
	putchar('\n');
	return (0);
}
