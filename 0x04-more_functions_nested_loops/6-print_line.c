#include "main.h"

/**
 * print_line - prints - n number of times
 * @n: times to be printed
 * Return: 0 if completed successfully
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
