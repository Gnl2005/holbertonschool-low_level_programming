#include <stdio.h>
#include <stdlib.h>

/**
 * main - Enter point
 * @argc: Argument count
 * @argv: Argument massiv
 * 
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b, n;

	if (argc != 3)
	{
		printf("Eror\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	n = a * b;

	printf("%d\n", n);
	return (0);
}
