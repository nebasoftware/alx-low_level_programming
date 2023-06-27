#include "main.h"

/**
 * rev_string - reverses string passed
 * @s: string passed
 * Return: nothing
 */

void rev_string(char *s)
{
	int length, i;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (i = length - 1; s[i]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
