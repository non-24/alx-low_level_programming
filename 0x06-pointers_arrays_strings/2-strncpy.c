#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @src: string to be copied from
 * @dest: string to copy from
 * @n: the integer that determines number of bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; n > a; a++)
		dest[a] = '\0';

	return (dest);
}
