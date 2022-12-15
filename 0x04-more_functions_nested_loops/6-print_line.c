#include "main.h"
/**
 * print_line - draw a straight line in the terminal
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

