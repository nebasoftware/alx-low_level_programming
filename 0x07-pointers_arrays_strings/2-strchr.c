#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates the first occurence of the character
 * @s: string to be searched in
 * @c: characted to be searched in s
 * Return: returns pointer to the location of the character
 */

char *_strchr(char *s, char c)
{
	int i, j;
	static char dest[98];

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			break;
	}
	for (j = i; s[j] != '\0'; j++)
	{
		dest[j - i] = s[j];
	}
	dest[j] = '\0';
	return (dest);
}
