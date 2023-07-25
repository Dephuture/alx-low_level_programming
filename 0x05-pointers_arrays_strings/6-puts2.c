#include "main.h"

/**
 * puts2 - accepts pointers
 * @str: take a point
 * Return: returns 0 if successf
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
