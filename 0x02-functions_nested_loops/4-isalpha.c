#include <stdio.h>

/**
 * _isalpha - returns 1 if the input is a letter.
 *  In other cases, it returns 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
    }
