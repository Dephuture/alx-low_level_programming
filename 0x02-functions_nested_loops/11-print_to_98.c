#include "main.h"
/**
 * print_to_98 - this task is part of the function projects
 * @n: the first integer
 * Return: Always return 0 for success
 */

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar(i);
			}
			else if (i == 98)
			{
				_putchar(i);
				_putchar('\n');
			}
		}
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
			{
				_putchar(j);
			}
			else if (j == 98)
			{
				_putchar(j);
				_putchar('\n');
			}
		}
	}
}
