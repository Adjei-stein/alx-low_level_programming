#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The basic function
 *
 * Return: 0
 *
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
