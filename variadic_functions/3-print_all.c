#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments passed to the function
 *
 * Description: prints each argument according to its type, separated by ", "
 *              if string is NULL, prints (nil)
 *              unsupported format specifiers are ignored
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i, printed = 0;
	char *str;

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (printed)
			printf(", ");

		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
		}
		else
			continue;

		printed = 1;
	}

	va_end(args);
	printf("\n");
}

