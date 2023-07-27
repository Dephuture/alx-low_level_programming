#include "main.h"

/**
 * reverse_array - name of the function
 * @a: input from user
 * @n: input froom user
 * Return: return 0 when successful
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}
