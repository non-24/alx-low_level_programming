#include <stdio.h>

/**
 * main - find and print the largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	long int p, findPrint;

	p = 612852475143;
	for (findPrint = 2; findPrint <= p; findPrint++)
	{
		if (p % findPrint == 0)
		{
			p /= findPrint;
			findPrint--;
		}
	}
	printf("%1ld\n", findPrint);
	return (0);
}
