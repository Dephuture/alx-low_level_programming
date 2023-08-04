#include "main.h"
/**
 * _puts - function to prints a string
 * @str: takes a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
