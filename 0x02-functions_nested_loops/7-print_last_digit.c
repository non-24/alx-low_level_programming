#include "main.h"
/**
 * print_last_digit - print the last digit
 * @d: the last digit of a number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int d)
{
	int ld;

	if (d < 0)
	{
		ld = (-1 * (d % 10));
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = (d % 10);
		_putchar(ld + '0');
		return (ld);
	}
}
