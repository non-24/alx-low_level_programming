#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line
 * @a: input array
 * @n: input n elements
 */
void print_array(int *a, int n)
{
	int s = 0;

	for (; s < n; s++)
	{
		printf("%d", *(a + s));
		if (s != (n - 1))
			printf(", ");
	}
	printf("\n");
}
