#include "main.h"

/**
 * _memset: fills memory with constant byte
 * @b: constant byte
 * @s: pointed memory area
 * @n: bytes of memory to be changed
 *
 * Return: 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}