#include "main.h"

/**
 * factorial - prints factorial of a number
 * @n: number
 *
 * Return: Always 0 success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}



