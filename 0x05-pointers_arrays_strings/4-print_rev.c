#include "main.h"
/**
 * print_rev - My function, hehe
 * @str: Char to be received
 * Return: 0;
 */
void print_rev(char *str)
{
	char *ar = str;
	int i;
	int c;
	int b;

	i = 0;
	while (*ar != '\0')
	{
	i++;
	ar++;
	}
	c = i;
	for (b = -1; b >= (-c); b--)
	{
		printf("%c", ar[b]);
	}
	printf("\n");
}
