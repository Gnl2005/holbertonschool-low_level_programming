#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdring.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: pointers
 * @src: pointers
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
