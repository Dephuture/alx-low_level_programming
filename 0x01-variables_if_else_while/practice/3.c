#include <stdio.h>

int main(void)
{
	int n;
	int m;

	n = 97;
	m = 65;

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
