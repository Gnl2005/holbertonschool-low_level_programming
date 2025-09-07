#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _sqrt_recursion - esas funksiya
 * @n: variable
 *
 * Return: -1
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - esas funksiya
 * @n: n
 *
 * Return: return
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
