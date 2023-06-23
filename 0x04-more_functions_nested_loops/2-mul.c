#include "main.h"

/**
 * mul - multiplies two numbers
 * @a: parameter 1
 * @b: parameter 2
 * Return: 0 if completed successfully
 */

int mul(int a, int b)
{
	if (a >= 0 && b >= 0)
		return (a * b);
	else if (a < 0 and b >= 0)
		return ((-1 * a) * b);
	else if (a >= 0 && b < 0)
		return ((-1 * b) * a);
}
