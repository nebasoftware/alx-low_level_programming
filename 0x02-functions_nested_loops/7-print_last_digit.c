#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @c: passed number
 * Return: 0 if completed successfully
 */

int print_last_digit(int c)
{
	if (c > 0)
		return (c % 10);
	else if (c == 0)
		return (0);
	else
		{
			int x;

			x = -1 * c;
			return (-1 * (x % 10));
		}
}
