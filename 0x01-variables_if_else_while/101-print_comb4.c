#include <stdio.h>
/**
 * main - Start point
 * description: print multiple numbers
 * Return: Always 0
 */

int main(void)
{
	int num_1;
	int num_2;
	int num_3;

	num_1 = '0';
	num_2 = '0';
	num_3 = '0';

	while (num_1 <= '9')
	{
		while (num_2 <= '9')
		{
			num_3 = '0';
			while (num_3 <= '9')
			{
				if (num_1 < num_2 && num_2  < num_3)
				{
					putchar(num_1);
					putchar(num_2);
					putchar(num_3);

					if (num_1 != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				num_3++;
			}
			num_2++;
		}
		num_1++;
		num_2 = '0';
	}
	putchar('\n');
	return (0);
}
