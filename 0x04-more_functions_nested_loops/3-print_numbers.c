#include "main.h"
/**
 * print_numbers - checks whether is upper
 * Return: returns 0 when upper  and 1 when not
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
