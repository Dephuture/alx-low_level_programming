#include "main.h"

/**
 * _print_rev_recursion - works as
 * @s: takes an int
 * Return: returns 0 when successful
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
