#include "main.h"

/**
 * *_memset - works as memset
 * @s: takes an int
 * @b: takes an int
 * @n: takes an int
 * Return: returns 0 when successful
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
