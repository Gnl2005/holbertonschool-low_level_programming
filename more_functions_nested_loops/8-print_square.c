#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_square - a function that prints a square
 * @size: the size of the square
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < a; b++)
			_putchar('#');

		_putchar('\n');
	}
}
