#include "main.h"

/**
 * _strlen_recursion - works as
 * @s: takes an int
 * Return: returns 0 when successful
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
