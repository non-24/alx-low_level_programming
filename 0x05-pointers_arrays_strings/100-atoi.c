#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 * @s: input string
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int string = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + string) != '\0')
	{
		if (size > 0 && (*(s + string) < '0' || *(s + string) > '9'))
			break;
		if (*(s + string) == '-')
			pn *= -1;

		if ((*(s + string) >= '0') && (*(s + string) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		string++;
	}

	for (i = string - size; i < string; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
