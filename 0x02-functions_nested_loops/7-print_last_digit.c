#include <stdio.h>

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
		c = c * -1;
	}
	putchar('0' + c);
	return (c);
}
