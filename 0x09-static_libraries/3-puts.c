#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *s)
{
	int c = 0;

	while (c >= 0)
	{
		if (s[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[c]);
		c++;
	}
}
