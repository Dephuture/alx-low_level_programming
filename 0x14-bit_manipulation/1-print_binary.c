#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask > 0)
	{
		if ((n & mask) != 0 || flag)
		{
			_putchar((n & mask) ? '1' : '0');
			flag = 1;
		}
		mask >>= 1;
	}
	if (!flag)
	{
		_putchar('0');
	}
}
