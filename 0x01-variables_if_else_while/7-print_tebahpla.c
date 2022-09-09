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
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
