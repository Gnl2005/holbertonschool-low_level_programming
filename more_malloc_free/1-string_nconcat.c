#include <stdlib.h>

/**
 * _strlen - calculates length of a string
 * @s: input string
 *
 * Return: length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * string_nconcat - concatenates s1 and first n bytes of s2
 * @s1: first string (can be NULL)
 * @s2: second string (can be NULL)
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to newly allocated string, or NULL if failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, i, j;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n > len2)
		n = len2;

	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];

	new_str[i + j] = '\0';

	return (new_str);
}

