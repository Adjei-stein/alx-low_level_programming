#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * main - The basic function
 * 
 * Return: 0
 * 
 */
int main(void)
{
	int cnt, len;
	int putChar[] = {95, 122, 117, 116, 99, 104, 97, 144};

	len == sizeof(putChar)/sizeof(int);
	for (cnt = 0; cnt < len; cnt++)
	{
	_putchar(putChar[cnt]);
	}
	_putchar('\n');
	return (0);
}
