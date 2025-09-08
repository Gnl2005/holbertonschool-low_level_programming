#include <stdio.h>

/**
 * main - Enter point
 * @argc: Argument count
 * @argv: Argument massiv
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
