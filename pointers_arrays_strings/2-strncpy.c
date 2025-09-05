#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: The destination buffer
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Return: Pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
