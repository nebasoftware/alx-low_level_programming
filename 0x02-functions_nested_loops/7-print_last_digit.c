#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @c: passed number
 * Return: 0 if completed successfully
 */

int print_last_digit(int c)
{
	int last_digit;

	if (c < 0)
	{
		last_digit = (-1 * (c % 10));
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = (c % 10);
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
