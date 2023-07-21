#include "main.h"
/**
 * _isupper - checks whether is upper
 * @c: checks the character
 * Return: returns 0 when upper  and 1 when not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
