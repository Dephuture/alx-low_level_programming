#include "main.h"

/**
 * *_strcat - this concatenate strings
 * @dest: take a string
 * @src: takes a string
 * Return: return 0 when successful
 */
char *_strcat(char *dest, char *src)
{
	char *len = dest;

	while (*len != '\0')
	{
		len++;
	}
	while (*src != '\0')
	{
		*len = *src;
		len++;
		src++;
	}
	*len = '\0';
	return (dest);
}
