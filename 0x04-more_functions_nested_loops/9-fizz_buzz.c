#include <stdio.h>

/**
 * main - The function
 *
 * Return : Always 0
 */
int main(void)
{
	int n;
	
	for (n = 1; n <= 100; n++)
	{
	if ((n % 3) == 0 && (n % 5) == 0)
	{
	printf("FizzBuzz");
	putchar(' ');
	}
	else if ((n % 3) == 0)
	{
	printf("Fizz");
	putchar(' ');
	}
	else if ((n % 5) == 0)
	{
	printf("Buzz");
	putchar(' ');
	}
	else
	{
	printf("%d", n);
	putchar(' ');
	}
	}
	printf("\n");

	return (0);
}
