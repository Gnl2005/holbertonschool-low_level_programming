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
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
