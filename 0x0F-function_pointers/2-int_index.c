#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array of int and char
 * @cmp: a pointer to the function
 * @size: sizeof array
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

