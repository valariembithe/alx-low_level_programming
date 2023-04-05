#include "main.h"

/**
 * _sqrt_recursion - square root of n
 * @n: number
 *
 * Return: Always 0 success
 */
int _sqrt (int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

/**
 * @i: iterate number
 * @n: calculate square root
 * _sqrt - calc natural sqrt
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
