#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - pfunction that print name using pointer to function
 * @name: takes strings to add
 * @f: takes pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
