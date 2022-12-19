#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: char array string type
 */
void puts_half(char *str)
{
	int s;

	for (s = 0; str[i] != '\0'; s++)
		s++;
	for (s /= 2; str[i] != '\0'; s++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
