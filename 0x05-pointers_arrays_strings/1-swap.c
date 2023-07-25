#include "main.h"

/**
 * swap_int - accepts pointers
 * @a: take a point
 * @b: take a pointer
 * Return: returns 0 if successf
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
