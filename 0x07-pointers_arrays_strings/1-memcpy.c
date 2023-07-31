#include "main.h"

/**
 * _memcpy - works as memset
 * @dest: takes an int
 * @src: takes an int
 * @n: takes an int
 * Return: returns 0 when successful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}
