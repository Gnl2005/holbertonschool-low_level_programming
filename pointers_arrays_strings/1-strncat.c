#include <stdio.h>
#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: pointers
 * @src: pointers
 * @n: The maximum number of bytes to append from src
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
