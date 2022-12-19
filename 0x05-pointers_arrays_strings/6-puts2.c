#include "main.h"

/**
 * puts2 - a function that prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: input
 */

void puts2(char *str)
{
	int string = 0;

	while (string >= 0)
	{
		if (str[string] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (string % 2 == 0)
			_putchar(str[string]);
		string++;
	}
}
