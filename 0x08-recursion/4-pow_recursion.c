#include "main.h"

/**
 * _pow_recursion - works as
 * @x: takes an int
 * @y: takes int
 * Return: returns 0 when successful
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
