#include <stdio.h>
/**
 * main - Start point
 * Description: Print Alpabet anf Numbers
 * Return: Should always be 0 for success
 */

int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 0; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
