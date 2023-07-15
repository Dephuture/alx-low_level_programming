#include <stdio.h>
/**
 * main - Start point
 * Description: Print Alpabet anf Numbers
 * Return: Should always be 0 for success
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
