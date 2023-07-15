#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* 
 * main - starting point
 * Return: Should always be 0 for succes
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	return (0);
}
