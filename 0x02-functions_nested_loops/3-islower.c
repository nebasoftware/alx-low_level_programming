#include "main.h"

/**
 * _islower - checks if the character is lower or not
 * @c: character input from user
 * Return: 1 if c is lower
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
