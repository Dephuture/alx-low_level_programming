#include <stdio.h>
/**
 * main - Starting point
 * Description: Print alphabets
 * Return: Always 0 = success
 */

int main(void)
{
        int n = 97;

        while (n <= 122)
        {
                putchar(n);
                n++;
        }
        putchar('\n');
        return (0);
}
