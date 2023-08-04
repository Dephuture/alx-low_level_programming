#include "main.h"
/**
 * _strpbrk - Entry points
 * @s: takes  input
 * @accept: takes input
 * Return: Always 0 for (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
