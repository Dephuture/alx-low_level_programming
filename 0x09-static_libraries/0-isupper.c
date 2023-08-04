#include "main.h"

/**
 * _isupper - upper letter converter
 * @c: takes an int
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
