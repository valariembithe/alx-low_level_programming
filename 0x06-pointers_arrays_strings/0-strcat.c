#include "main.h"

/**
 * _strcat - concatenates a string
 * @src: string to append
 * @dest: string destination
 *
 * Return: resulting dest string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int destlen = 0;
	int srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + i] = src[i];
	return (dest);
}

