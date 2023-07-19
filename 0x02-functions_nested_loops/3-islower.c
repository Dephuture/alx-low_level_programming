#include "main.h"
/**
 * _islower - this task is part of the function projects
 * @c: letter
 * Return: Always return 0 for success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
