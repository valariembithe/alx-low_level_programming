#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string of any bytes in accept
 * @s: string
 * @accept: string
 *
 * Return: pointer to the byte in s that matches accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
