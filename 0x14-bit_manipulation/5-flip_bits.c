#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number
 * @n: number
 * @m: number to flip to n
 *
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bit = 0;

	while (xor > 0)
	{
		bit += (xor & 1);
		xor >>= 1;
	}
	return (bit);
}
