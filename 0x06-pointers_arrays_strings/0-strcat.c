#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @src: first string to be concatenated to dest
 * @dest: second string to be concatenated to src
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[z] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
