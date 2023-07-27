#include "main.h"

/**
 * *strncpy - this concatenate strings
 * @dest: take a string
 * @n: the max number
 * @src: takes a string
 * Return: return 0 when successful
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *len = dest;
	int i = 0;

	while (*src != '\0' && i < n)
	{
		*len = *src;
		len++;
		src++;
		i++;
	}
	while (i < n)
	{
		*len = '\0';
		len++;
		i++;
	}
	return (dest);
}
