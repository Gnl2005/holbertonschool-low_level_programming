#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates s1 and the first n bytes of s2
 * @s1: first string (can be NULL)
 * @s2: second string (can be NULL)
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to newly allocated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1, len2, total_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	total_len = len1 + n + 1; /* +1 for null terminator */

	new_str = malloc(total_len);
	if (new_str == NULL)
		return (NULL);

	memcpy(new_str, s1, len1);
	memcpy(new_str + len1, s2, n);
	new_str[len1 + n] = '\0';

	return (new_str);
}

