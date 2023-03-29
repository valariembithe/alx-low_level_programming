#include "main.h"

/**
 * largest_number- return largest of 3 numbers
 * @a: first int
 * @b: second int
 * @c: third int
 *
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	largest = (a > b) ? a : b;
	largest = (largest > c) ? largest : c;
	return (largest);
}
