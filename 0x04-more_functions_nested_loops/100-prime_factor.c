#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if completed successfully
 */
int main() 
{
	long int i, x, count;
	long int num;

	num = 612852475143;
	for (x = 1; x <= num; x++)
	{
		count = 0;
		if (num % x == 0)
		{
			for (i = 1; i <= x; i++)
			{
				if (x % i == 0)
				{
					count = count + 1;
				}
			}
			if (count == 2)
			{
				printf("%ld", x);
			}
		}
	}

	return 0;
}
