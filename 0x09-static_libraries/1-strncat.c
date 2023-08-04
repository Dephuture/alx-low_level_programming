#include "main.h"
/**
 * _strncat - concatenates function
 * using bytes from src
 * @dest: takes an int
 * @src: takes an int
 * @n: takes an int
 *
 * Return: 0 for success
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
