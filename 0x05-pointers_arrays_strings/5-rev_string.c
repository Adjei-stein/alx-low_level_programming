#include "main.h"
/**
 * rev_string - That's my function
 * @str:vThis is the received variable
 * Return: 0
 */
void rev_string(char *str)
{
	int i;
	int c;
	int b;

	i = 0;
	char *ar = str;
	while (*ar != '\0')
	{
	i++;
	ar++;
	}
	c = i;
	/*printf("%d\n", c);*/
	for (b = -1; b >= (-c); b--)
	{
	printf("%c", ar[b]);
	}
	printf("\n");
}
