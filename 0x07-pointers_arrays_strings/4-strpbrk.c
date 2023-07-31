#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - works as memset
 * @s: takes an int
 * @accept: takes an int
 * Return: returns 0 when successful
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (NULL);
}
