#include "main.h"
#include <stddef.h>

/**
 * *_strchr - works as memset
 * @s: takes an int
 * @c: takes an int
 * Return: returns 0 when successful
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
