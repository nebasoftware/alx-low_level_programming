#include "main.h"

/**
 * puts22 - prints every other character
 * @str: string to be worked on
 * Return: nothing
 */

void puts2(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	for (i = 0; i < length; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
