#include "main.h"
/**
 * jack_bauer - this task is part of the function projects
 * Return: Always return 0 for success
 */

void jack_bauer(void)
{
	int M;
	int H;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
