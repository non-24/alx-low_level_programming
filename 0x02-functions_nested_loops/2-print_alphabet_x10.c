#include "main.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase,
 * followed by a new line
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a, i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
