#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 0 success
 */
int _strcmp(char *s1, char *s2)
{
	int i, val;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (val = s1[i] - s2[i]);
			else
				return (val = s1[i] - s2[i]);
		}
		else
			return (val);
	}
	return (0);
}
