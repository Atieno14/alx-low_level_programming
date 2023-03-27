#include "main.h"
/**
 * swap_int - this program swaps the value of two integers
 * @a: int to be swapped with b
 * @b: int to be swapped with a
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

