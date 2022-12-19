#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the first integer
 * @b: the second integer
 */

void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}