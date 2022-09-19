#include "main.h"
/**
 * void swap_int(int *a, int *b)
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
