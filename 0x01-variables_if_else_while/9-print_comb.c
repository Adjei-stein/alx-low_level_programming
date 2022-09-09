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
	char k;
	char v;

	v = ',';
	k = ' ';
	for (n = 0; n <= 9; n++)
	{
	putchar((n % 10) + '0');
	if (n == 9)
	{
	continue;
	}
	putchar(v);
	putchar(k);
	}
	putchar('\n');
	return (0);
}
