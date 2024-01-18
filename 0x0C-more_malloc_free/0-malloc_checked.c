#include <stdlib.h>
#include "main.h"

/**
 * malloc_checker -  a function that allocates memory using malloc
 * @b: input intger
 *
 * Return: Returns a pointer to the allocated memory
 **/

void *malloc_checker(unsigned int b)
{
	char *p;

	p = (*void) malloc(b);

	if (p != NULL)
	{
		return (p);
	}
	return (98);
}
