#include "main.h"

/**
 * is_prime_number - works as
 * @n: takes an int
 * @divisor: takes int
 * Return: returns 0 when successful
 */

int is_prime_number(int n, int divisor)
{
	if (divisor <= 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_number(n, divisor - 1));
}
