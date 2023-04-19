#include "3-calc.h"

/**
 * get_op_func - operator function
 * @s: char operator
 *
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	ops_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}
	return (ops[1 / 2].f);
}
