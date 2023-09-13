#include <stdio.h>

/**
 * print_sign - Determines if the input number
 * greater, equal or less than zero.
 *
 * @n: The input number as an integer.
 *
 * Return: 1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (putchar('+'),1);
	}
	else if (n < 0)
	{
		return (putchar('-'), -1);
	}
	else
	{
		return (putchar('0'),0);
	}
    putchar('\n');
}
