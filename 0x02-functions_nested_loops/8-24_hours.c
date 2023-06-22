#include "main.h"

/**
 * jack_bauer - displays 24 hours time with seconds
 *
 * Return: 0 if completed successfully
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar('\n');
		}
	}
	return (0);
}
