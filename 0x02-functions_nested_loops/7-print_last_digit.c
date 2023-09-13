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
    putchar(c);
	return c;
}
