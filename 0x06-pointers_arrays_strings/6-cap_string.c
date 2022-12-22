#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @s: string
 * Return: s
 */

char *cap_string(char *s)
{
	int i, j;
	int tri;
	char nots[] = ",;.!?(){}\nt\"";

	for (i = 0, tri = 0; s[i] != '\0'; i++)
	{
		if (s[0] > 96 && s[0] < 123)
			tri = 1;
		for (j = 0; nots[j] != '\0'; j++)
		{
			if (nots[j] == s[i])
				tri = 1;
		}
		if (tri)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] -= 32;
				tri = 0;
			}
			else if (s[i] > 64 && s[i] < 91)
				tri = 0;
			else if (s[i] > 47 && s[i] < 58)
				tri = 0;
		}
	}
	return (s);
}
