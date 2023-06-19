#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if completed succefully
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
