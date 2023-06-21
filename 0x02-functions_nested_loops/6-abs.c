#include "main.h"

/**
 * _abs - computes the absolute value of a number
 * @c: passed number
 * Return: 0 if successfully completed
 */

int _abs(int c)
{
	if (c > 0)
		return (c);
	else if (c < 0)
		return (-1 * c);
	else
		return (0);
}
