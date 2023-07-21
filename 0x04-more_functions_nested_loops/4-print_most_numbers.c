#include "main.h"
/**
 * print_most_numbers - checks whether is upper
 * Return: returns 0 when upper  and 1 when not
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		else
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
