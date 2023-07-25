#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * generate_password - accepts pointers
 * @length: take a point
 * Return: returns 0 if successf
 */

char* generate_password(int length)
{
	static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char* password = malloc(length + 1);
	
	if (password != NULL)
	{
		for (int i = 0; i < length; i++)
		{
			int index = rand() % (sizeof(charset) - 1);
			password[i] = charset[index];
		}
		password[length] = '\0';
	}
	return password;
}
