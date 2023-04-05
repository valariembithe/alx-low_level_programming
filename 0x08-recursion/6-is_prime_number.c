#include "main.h"

/**
 * is_prime_number - checks prime no
 * @n: number
 *
 * Return: Always 0 success else 1
 */
int _prime(int n, int i);
/**
 * @n: number
 * @i: iteration
 * _prime - prime numbers
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
int _prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (_prime(n, i + 1));
}
