#include "3-calc.h"

/**
 * op_add - add teo integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - add two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: integer result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		print("Error\n");
		exit(100);
	}
	return (a % b);
}
