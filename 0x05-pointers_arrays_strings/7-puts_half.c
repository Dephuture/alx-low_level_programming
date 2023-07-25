#include "main.h"

/**
 * puts_half - accepts pointers
 * @str: take a point
 * Return: returns 0 if successf
 */
void puts_half(char *str)
{
	int length = 0;
	int half_length;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	half_length = (length + 1) / 2;

	for (i = half_length; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
