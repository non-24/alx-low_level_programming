#include "main.h"

/**
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
			if (s[i] == lower[x] || s[i] == upper[x])
			{
				s[i] = numbers[x];
				break;
			}
		}
	}
	return (s);
}
