#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  * main - The basic function
 *   * 
 *    * Return: 0
 *     * 
 *      */
int main(void)
{
	int n:
	int k;

	for (n = 0; n < 9; n++)
	{
	for (k = 1; k <= 9; k++)
	{
	putchar((n % 10) + '0');
	putchar((k % 10) + '0');
	if (n == 8 && k == 9)
	continue;
	}
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');   
	return (0);
	}
