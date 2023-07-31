#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_diagsums - works as memset
 * @a: takes an int
 * @size: takes int
 * Return: returns 0 when successful
 */

void print_diagsums(int *a, int size)
{
	int sum_main_diag = 0;
	int sum_secondary_diag = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_main_diag += a[i * size + i];
		sum_secondary_diag += a[i * size + (size - 1 - i)];
	}
	printf("Sum of main diagonal: %d\n", sum_main_diag);
	printf("Sum of secondary diagonal: %d\n", sum_secondary_diag);
}
