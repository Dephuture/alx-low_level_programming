#include "main.h"
/**
 * _memset - mem function
 * @s: takes an int
 * @b: takes an int
 * @n: takes an int
 *
 * Return: 0 success
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
