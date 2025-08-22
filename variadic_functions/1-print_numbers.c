#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers separated by a string
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Description: If separator is NULL, it is not printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		if (separator != NULL && i > 0)
			printf("%s", separator);

		printf("%d", num);
	}

	va_end(args);

	printf("\n");
}

