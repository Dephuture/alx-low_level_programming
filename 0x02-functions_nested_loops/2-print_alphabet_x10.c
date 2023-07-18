#include "main.h"
/**
 * print_alphabet_x10 - this task is part of the function projects
 * Return: Always return 0 for success
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
