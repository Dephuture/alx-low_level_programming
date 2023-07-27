#include "main.h"

/**
 * *string_toupper - name of the function
 * @s: input from user
 * Return: return 0 when successful
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - ('a' - 'A');
		}
		p++;
	}
	return (s);
}
