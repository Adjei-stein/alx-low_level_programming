#include "main.h"
/**
 * rev_string - Function starting point
 * @str - the pointer
 * Return: 0
 * 
 */
void rev_string(char *str)
{
	char *ar = str;
	int i;
	int c;

	i = 0;
	while (*(ar + i) != '\0')
	{
	i++;
	}
	c = i - 1;
	while (*(ar + c) != '\0' && c >= 0)
	{
	printf("%c", *(ar + c));
	c--;
	}
	printf("\n");
}
