#include <stdio.h>

int main(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		putchar(48 + n);
		putchar('\n');
		n++;
	}
	return (0);
}
