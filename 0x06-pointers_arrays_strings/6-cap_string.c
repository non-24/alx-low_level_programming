#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @string: string to capitalize
 * Return: the capitalized string
 */
char *cap_string(char *string)
{
	int i = 0;

	while (string[++i])
	{
		while (!(string[i] >= 'a' && string[i] <= 'z'))
			i++;

		if (string[i - 1] == ' ' ||
				string[i - 1] == '\t' ||
				string[i - 1] == '\n' ||
				string[i - 1] == ',' ||
				string[i - 1] == ';' ||
				string[i - 1] == '.' ||
				string[i - 1] == '!' ||
				string[i - 1] == '?' ||
				string[i - 1] == '"' ||
				string[i - 1] == '(' ||
				string[i - 1] == ')' ||
				string[i - 1] == '{' ||
				string[i - 1] == '}')
			string[i] -= 32;
	}
	return (string);
}
