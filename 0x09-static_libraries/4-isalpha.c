#include "main.h"

/**
 * _isalpha - function for alphabetic character
 * @c: takes character
 * Return: 0 for success
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
