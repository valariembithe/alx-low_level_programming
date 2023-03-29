#include "main.h"

/**
 * print_last_digit - Print the last digit
 * @n: value to be checked
 *
 * Return: Lastdigit of n
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit *= -1;
	}
	_putchar(lastdigit + '0');
	return (lastdigit);
}
