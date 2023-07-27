#include "main.h"

/**
 * *_strncat - this concatenate strings
 * @dest: take a string
 * @n: the max number
 * @src: takes a string
 * Return: return 0 when successful
 */
char *_strncat(char *dest, char *src, int n)
{
	char *len = dest;

	while (*len != '\0')
	{
		len++;
	}
	while (*src != '\0' && n > 0)
	{
		*len = *src;
		len++;
		src++;
		n--;
	}
	*len = '\0';
	return (dest);
}
