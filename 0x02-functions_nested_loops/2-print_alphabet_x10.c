#include "main.h"

/**
 * print_alphabet_x10 - prints 10x the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	for (n = 1; n <= 10; n++)
	{
	for (strt = 97; strt < 123; strt++)
	{
	_putchar(letter);
	}
	_putchar('\n');
	}
}
