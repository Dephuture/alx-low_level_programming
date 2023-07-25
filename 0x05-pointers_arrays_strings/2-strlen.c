#include "main.h"

/**
 * _strle - accepts pointers
 * @s: take a point
 * Return: returns 0 if successf
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
