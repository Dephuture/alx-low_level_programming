#include "main.h"
/**
 * more_numbers - checks whether is upper
 * Return: returns 0 when upper  and 1 when not
 */

void more_numbers(void)
{
	int c;
	int d;

	for (c = 1; c <= 10; c++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
			_putchar('1');
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
