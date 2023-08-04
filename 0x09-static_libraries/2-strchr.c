#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry function
 * @s: takes an int
 * @c: takes an int
 * Return: returns 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
