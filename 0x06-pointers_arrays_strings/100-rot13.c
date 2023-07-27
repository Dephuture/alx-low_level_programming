#include "main.h"
/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */

char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
		{
			char base = (*ptr >= 'A' && *ptr <= 'Z') ? 'A' : 'a';
			*ptr = (((*ptr - base) + 13) % 26) + base;
		}
		ptr++;
	}
	return (str);
}
