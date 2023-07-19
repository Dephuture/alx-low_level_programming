#include "main.h"
/**
 * _isalpha - this task is part of the function projects
 * @c: letter
 * Return: Always return 0 for success
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 60 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
