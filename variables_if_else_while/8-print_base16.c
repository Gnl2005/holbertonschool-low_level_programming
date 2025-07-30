#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++) /* '0' to '9' */
		putchar(i);

	for (i = 97; i <= 102; i++) /* 'a' to 'f' */
		putchar(i);

	putchar('\n');

	return (0);
}

