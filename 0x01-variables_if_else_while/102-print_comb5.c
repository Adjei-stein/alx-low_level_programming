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
	int q;

	for (n = 0; n <= 9; n++)
	{
	for (k = 0; k <= 9; k++)
	{
	for (r = 0; r <= 9; r++)
	{
	for (q = 0; q <= 9; q++)
	{
	if (k == q && n == r || n == 9 && q <= k || r < n || q < k) {
	continue;
	}
	putchar((n % 10) + '0');
	putchar((r % 10) + '0');
	putchar(' ');
	putchar ((k % 10)+ '0');
	putchar ((q % 10)+ '0');
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
