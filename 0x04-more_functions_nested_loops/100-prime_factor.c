#include "main.h"
#include <stdio.h>
/**
 * main - checks whether is upper
 * Return: returns 0 when upper  and 1 when not
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
