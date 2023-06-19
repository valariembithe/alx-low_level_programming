#include "main.h"

/**
 * _puts - prints a string
 * @str: contain a pointer to int
 *
 * Return: void on success
 */
void _puts(char *str)
{
	char *i;
	int n;

	i = str;
	for (n = 0; i[n]; n++)
	{
		_putchar(i[n]);
	}
	_putchar('\n');
}
