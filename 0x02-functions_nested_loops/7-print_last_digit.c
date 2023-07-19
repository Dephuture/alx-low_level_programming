#include "main.h"
/**
 * print_last_digit - this task is part of the function projects
 * @n: letter
 * Return: Always return 0 for success
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-1);
	}
	else
	{
		_putchar(l + 48);
		return (1);
	}
}
