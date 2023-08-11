#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function on memory allocation
 * @b: takes a number
 * Return: Returns a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
