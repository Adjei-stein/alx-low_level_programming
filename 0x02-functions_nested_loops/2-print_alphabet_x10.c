#include "main.h"
/**
 * print_alphabet_x10 - That's my function, Baby
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	int strt;
	int n;
	for (n = 1; n <= 10; n++)
	{
	for (strt = 97; strt < 123; strt++)
	{
	_putchar(strt);
	}
	_putchar('\n');
	}
}
