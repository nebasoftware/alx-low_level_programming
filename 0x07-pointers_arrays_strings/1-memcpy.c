#include "main.h"

/**
 * _memcpy - copies memory location
 * @dest: destination location
 * @src: source location
 * @n: size of byte to fill memory area
 * Return: returns memory location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
