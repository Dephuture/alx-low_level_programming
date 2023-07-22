#include "main.h"
/**
 * print_line - checks whether is upper
 * @n: number of lines
 * Return: returns 0 when upper  and 1 when not
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
