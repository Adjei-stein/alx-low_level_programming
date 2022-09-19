#include "main.h"
/**
 * swap_int - The function, you know
 * @a: One pointer
 * @b: Another pointer
 * Return: nil
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
