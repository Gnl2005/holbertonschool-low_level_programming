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
	unsigned int i = 0, printed = 0;
	char *str;

	va_start(args, format);

	if (format)
		while (format[i])
		{
			if (printed)
				printf(", ");

			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				printed = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				printed = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				printed = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					printf("(nil)");
				else
					printf("%s", str);
				printed = 1;
				break;
			}
			i++;
		}

	va_end(args);
	printf("\n");
}

