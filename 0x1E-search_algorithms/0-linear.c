#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integer
 * @array: a pointer to the first element of the array to search in
 * @size: size of elements in array
 * @value: thr value to be searched
 *
 * Return: index of the value searched
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked in[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
