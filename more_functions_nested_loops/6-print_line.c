#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of times the character
 */
void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i > n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
