#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer
 * @b: the constant byte
 * @n: function fills the first
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
