#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if completed successfully
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		if (i == '8')
			break;
	}
	putchar('9');
	return (0);
}
