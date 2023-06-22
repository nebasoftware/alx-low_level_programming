#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers up to 98
 * @n: passed number
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
			if (i == 97)
				break;
		}
		printf("%d\n", 98);
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
			if (i == 99)
				break;
		}
		printf("%d\n", 98);
	}
}
