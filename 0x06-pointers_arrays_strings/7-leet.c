#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	int i;
	int x;

	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char numbers[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; lower[x] != '\0' && upper[x] != '\0'; x++)
		{
			if (s[i] == lower[x] || s[i] == upper[i])
			{
				s[i] = numbers[x];
				break;
			}
		}
	}
	return (s);
}
