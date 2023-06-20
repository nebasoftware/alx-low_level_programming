#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 * Return: 0 if completed successfully
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

