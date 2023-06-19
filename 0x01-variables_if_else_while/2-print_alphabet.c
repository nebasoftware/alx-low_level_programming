#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 if completed successfully
 */

int main(void)
{
	int i;

	for (i = 0; i >= 'a' && i <= 'z'; i++)
	{
		putchar(i + '0');
	}
	return (0);
}
