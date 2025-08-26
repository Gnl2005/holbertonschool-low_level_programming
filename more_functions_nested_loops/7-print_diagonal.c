#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagonal - a function that draws a diagonal line
 * @n: the number of times
 */
void print_diagonal(int n);
{
	int a;

	if (n < 0)
	{
		_putchar('\n');
			return;
	}
	for (a = 0; a < n; a++)
		_putchar('\');

	_putchar('\n');
}
