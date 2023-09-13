#include <stdio.h>

/**
 * _islower - returns 1 if the input is a
 * lowercase character. in other cases, it returns 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
    }
