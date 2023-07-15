#include <stdio.h>
/**
 * main - Starting point
 * Description: Print alphabets
 * Return: Always 0 = success
 */

int main(void)
{
	int n = 65;
	int m = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
