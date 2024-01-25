#include "function_pointers.h"

/**
 * print_name - Function that prints a name of function.
 * @name: Name to be printed.
 * @f: Pointer to a function that takes a char pointer as a parameter.
 *
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);

}

