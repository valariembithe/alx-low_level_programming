#include "search_algos.h"

/**
 * binary_search -  searches for a value in a sorted array of integers 
 * using the Binary search algorithm
 * @*array:  a pointer to the first element of the array to search in
 * @size:the size of the array
 * @value: the value to be searched
 * Return: index of the target value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for(i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = (left + right) / 2;
		if (array[i] == value)
			return (i);
		if (array[i - 1] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
