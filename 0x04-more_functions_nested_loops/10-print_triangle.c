#include "main.h"

/**
 * print_triangle - prints triangle using #
 * @size: size of triangle
 * Return: 0 if completed successfully
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (k = size - i; k > 0; k--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
