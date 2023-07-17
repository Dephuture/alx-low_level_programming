#include <stdio.h>

int main(void)
{
	int n;
	int m;

	n = 48;
	m = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	n = 48;
	while (m <= 102)
	{
		putchar(m);
		m++;
	}
	m = 97;
	putchar('\n');
	return (0);
}
