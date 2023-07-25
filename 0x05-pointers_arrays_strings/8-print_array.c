#include "main.h"
#include <stdio.h>
/**
 * print_array - accepts pointers
 * @a: take a point
 * @n: takes int
 * Return: returns 0 if successf
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
