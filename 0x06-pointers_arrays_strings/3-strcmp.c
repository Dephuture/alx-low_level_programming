#include "main.h"

/**
 * _strcmp - this concatenate strings
 * @s1: take a string
 * @s2: the max number
 * Return: return 0 when successful
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
