#include "function_pointers.h"

/**
 * @name: the name of a person
 * @f: a function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
