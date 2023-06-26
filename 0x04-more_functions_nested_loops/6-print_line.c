#include "main.h"

/**
 * print_line - prints - n number of times
 * @n: times to be printed
 * Return: 0 if completed successfully
 */

void print_line(int n)
{
	int i;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
