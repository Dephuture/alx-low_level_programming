#include <stdio.h>
/**
 * main - Start point
 * Description: Aphabets
 * Return: Success is 0 always
 */

int main(void)
{
	int n = 122;
	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
