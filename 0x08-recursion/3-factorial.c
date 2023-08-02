#include "main.h"

/**
 * factorial - works as
 * @n: takes an int
 * Return: returns 0 when successful
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
