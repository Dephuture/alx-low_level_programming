#include "main.h"
#include <stddef.h>

/**
 * *_strspn - works as memset
 * @s: takes an int
 * @accept: takes an int
 * Return: returns 0 when successful
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				length++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			break;
		}
		s++;
	}
	return (length);
}
