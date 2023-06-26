#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed in reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = i - 1; s[j]; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
