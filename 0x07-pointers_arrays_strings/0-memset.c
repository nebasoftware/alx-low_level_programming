#include "main.h"

/**
 * _memset - fulls the first n bytes of memory with b
 * @s: string to be worked on
 * @b: character to be filled in
 * @n: bytes to to be filled in
 * Return: returns the momory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
