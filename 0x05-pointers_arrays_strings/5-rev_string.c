#include "main.h"
/**
 * rev_string - That's my function
 * @str:vThis is the received variable
 * Return: 0
 */
void rev_string(char *str)
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
	/*printf("%d\n", c);*/
	for (b = -1; b >= (-c) && b < 0; b--)
	{
	printf("%c", ar[b]);
	}
	printf("\n");
}
