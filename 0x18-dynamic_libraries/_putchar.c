#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - write characyer of c to stdout
 * c: character to be used
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
