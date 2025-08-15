#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space containing
 *           a copy of the string given as a parameter.
 * @str: The string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 *         or insufficient memory was available.
 */
char	*_strdup(char *str)
{
	char	*dup;
	int	i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

