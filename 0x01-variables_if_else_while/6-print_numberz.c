#include <stdio.h>
/**
 * main - Starting point
 * Description: print 1-0
 * Return: Always 0 for success
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
