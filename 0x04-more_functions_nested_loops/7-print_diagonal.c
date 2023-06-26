#include "main.h"

/**
 * print_diagonal - prints diagonal with \ character
 * @n: number of times to print \
 * Return: 0 if completed successfully
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				for (j = 0; j < i; j++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
