#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @array: array of integers
 * @size: in the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: does not return 0, write -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL)
		return (-1);
	else if (cmp == NULL)
		return (-1);
	else if (size <= 0)
		return (-1);
	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
