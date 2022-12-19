#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: input
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int string = 0;

	while (*(s + string) != '\0')
		string++;
	return (string);
}
