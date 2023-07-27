#include "main.h"

/**
 * *leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the resulting encoded string.
 */

char *leet(char *str)
{
	char *ptr = str;
	char replacements[] = "44337711";
	char letters[] = "aeotlAEOTL";

	while (*ptr != '\0')
	{
		int i = 0;

		while (letters[i] != '\0')
		{
			if (*ptr == letters[i])
			{
				*ptr = replacements[i];
				break;
			}
			i++;
		}
		ptr++;
	}
	return (str);
}
