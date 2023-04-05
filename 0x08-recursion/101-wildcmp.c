#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: 1 on success else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 = '*')
	{
		return (wildcmp(s2, s1 + 1) || wildcmp(s1, s2 + 1));
	}
	else if(*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
