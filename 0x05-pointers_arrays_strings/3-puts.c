#include "main.h"

/**
 * _puts - prints strings to stdout
 * @str: string to be printed to the stdout
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
