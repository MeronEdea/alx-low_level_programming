#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (c < 0)
	{
        c = -c + 48;
		putchar(c);
		return (-c);
	}
	else
	{
		putchar(c + 48);
		return (c);
	}
}
