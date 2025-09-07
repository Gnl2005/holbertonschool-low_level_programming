#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _pow_recursion - a function
 * @x: value
 * @y: value
 *
 * Return: -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return(1);
	return (x * _pow_recursion(x, y - 1));
}
