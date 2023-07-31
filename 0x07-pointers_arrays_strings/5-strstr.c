#include "main.h"
#include <stddef.h>

/**
 * *_strstr - works as memset
 * @haystack: takes an int
 * @needle: takes an int
 * Return: returns 0 when successful
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
