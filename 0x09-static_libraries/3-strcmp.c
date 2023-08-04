#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: takes value
 * @s2: takes value
 *
 * Return: s0 success
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
