#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array of integers
 * @n: number of arrays
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
