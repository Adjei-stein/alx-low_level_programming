#include "main.h"

/**
 * main - Prints _putchar followed by a newline
 *
 * Return: Always 0.
 */
int main(void)
{
	int putChar[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int cnt, len;

	len = sizeof(putChar) / sizeof(int);
	for (cnt = 0; cnt < len; cnt++)
	{
		_putchar(putChar[cnt]);
	}
	_putchar('\n');
	return (0);
}
