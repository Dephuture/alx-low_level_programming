#include "main.h"
/**
 * print_triangle - checks whether is upper
 * @size: number of lines
 * Return: returns 0 when upper  and 1 when not
 */

void print_triangle(int size)
{
	int row;
	int hashes;
	int spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
