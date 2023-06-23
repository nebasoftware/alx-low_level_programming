#include "main.h"

/**
 * _isdigit - checks if an input is a digit or not
 * @c: passed paratmeter
 * Return: 1 if completed successfully
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
