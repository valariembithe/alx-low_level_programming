#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 success
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = _atoi(*(argv + 1)) * _atoi(*(argv + 2));
		printf("%i\n", mul);
	}
	return (0);
}
