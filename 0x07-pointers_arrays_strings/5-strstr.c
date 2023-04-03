#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: contains substring
 * @haystack: string
 *
 * Return: pointer to beginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
