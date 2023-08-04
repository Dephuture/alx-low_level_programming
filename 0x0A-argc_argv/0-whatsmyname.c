#include <stdio.h>
#include "main.h"

/**
 * main - start point
 * @argc: takes anint
 * @argv: takes an int
 * Return: Always 0 for seccess
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
