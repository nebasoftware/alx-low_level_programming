#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: passed value
 * Return: 1 if completed successfully
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
