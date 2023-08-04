#include <stdio.h>
#include "main.h"

/**
 *  main - starting point
 *  @argc: number arguments
 *  @argv: array of arguments
 *  Return: Always 0 for Success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
