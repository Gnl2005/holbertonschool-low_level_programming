#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_triangle - a function that prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - a - 1; b++)
			_putchar(' ');

		for (b = 0; b <= a; b++)
			_putchar('#');

		_putchar('\n');
	}
}
