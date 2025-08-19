#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line
 */
void more_numbers(void)
{
	int a;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n')
}
