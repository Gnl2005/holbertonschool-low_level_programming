#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * factorial - a function that returns the factorial of a given number
 * @n: variable
 *
 * Return: 1
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
