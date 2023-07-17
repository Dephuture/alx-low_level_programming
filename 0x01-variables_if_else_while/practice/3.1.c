#include <stdio.h>

int main(void)
{
	int n;
	int m;

	n = 97;
	m = 65;

	while (m <= 90)
	{
		while (n <= 122)
		{
			putchar(m);
			putchar(n);
			m++;
			n++;
			putchar('\n');
		}
	}
	/**
	 * putchar('\n');
	 */
	return (0);
}
