#include <stdio.h>

/**
 * Checks if a given character is lowercase or not.
 * 
 * @param c The character to check.
 * @return 1 if the character is lowercase, 0 otherwise.
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
	putchar('\n');
}
