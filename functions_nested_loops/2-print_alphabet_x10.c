#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Description: Prints the letters from 'a' to 'z', 10 times,
 * each followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}


