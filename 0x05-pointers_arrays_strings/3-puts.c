#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: works as the pointer to the string to print
 * Retrun: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
