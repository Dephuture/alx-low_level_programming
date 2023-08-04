#include "main.h"
/**
 *_memcpy - function that copies
 *@dest: takes an int
 *@src: tkes an int
 *@n: takes an int
 *
 *Return: 0 for success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
