#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: string to be concatenated
 * @src: string to be concatenated until n
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
	}

	return (dest);
}
