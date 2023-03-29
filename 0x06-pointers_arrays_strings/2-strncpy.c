#include "main.h"

/**
 * strncpy - copies string
 * @dest: destination of copied string
 * @src: string to be copied
 *
 * Return:: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n; i++)
		dest[i] = src[i];
	return (dest);
}
