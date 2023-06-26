#include "main.h"

/**
 * more_numbers - prints number from 0 to 14 10 times
 *
 * Return: 0 if completed successfully
 */

void more_numbers(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
