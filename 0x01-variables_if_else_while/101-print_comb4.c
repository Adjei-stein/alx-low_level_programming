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
	int k;
	int j;
	int r;
	int p;

	j = 1;
	for (n = 0; n < 9; n++)
	{
	p = 1;
	for (k = 0; k < 9; k++)
	{
	if (k < j || n == 8 || k == 9)
	{
	continue;
	}
	for (r = 0; r <= 9; r++)
	{
	if (n >= k || k >= r || r <= p)
	{
	continue;
	}
	putchar((n % 10) + '0');
	putchar((k % 10) + '0');
	putchar ((r % 10) + '0');
	if (n == 7 && k == 8 && r == 9)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	p++;
	}
	j++;
	}
	putchar('\n');
	return (0);
	}
