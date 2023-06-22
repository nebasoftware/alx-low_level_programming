#include <stdlib.h>
#include <stdio.h>
/**
 * positive_or_negative - checks for positive or negative
 * @n: pass value
 * Return: 0 if successful
*/
void positive_or_negative(int n)
{
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
}
