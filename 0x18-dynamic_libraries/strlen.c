#include "main.h"

/**
 * _strlen - length of string
 * @s: character to be checked
 *
 * Return: void on success
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

