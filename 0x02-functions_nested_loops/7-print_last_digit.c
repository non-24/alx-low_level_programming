#include "main.h"
/**
 * print_last_digit - print the last digit
 * @d: the last digit of a number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int d)
{
	int lastDigit = d % 10;

	if (lastDigit < 0)
		lastDigit *= -1;

	_putchar(lastDigit + '0');

	return (0);
}
