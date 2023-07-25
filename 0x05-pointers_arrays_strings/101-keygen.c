#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - accepts pointers
 * @dest: take a point
 * @src: takes int
 * Return: returns 0 if successf
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (original_dest);
}
