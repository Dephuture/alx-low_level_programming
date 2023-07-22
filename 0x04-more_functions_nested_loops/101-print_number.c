#include "main.h"
#include <stdio.h>
/**
 * print_number - checks whether is upper
 * @n: che the print number
 * Return: returns 0 when upper  and 1 when not
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
