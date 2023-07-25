#include "main.h"

/**
 * _puts - accepts pointers
 * @str: take a point
 * Return: returns 0 if successf
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
