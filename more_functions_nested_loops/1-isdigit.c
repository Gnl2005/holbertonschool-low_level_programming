#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: digit (0 through 9)
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (c == ('0' + a))
			return (1);
	}
	return (0);
}

