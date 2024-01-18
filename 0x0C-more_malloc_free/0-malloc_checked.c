#include "main.h"

/**
 * malloc_checker -  a function that allocates memory using malloc
 * @b: input intger
 *
 * Return: Returns a pointer to the allocated memory
 **/

void *malloc_checker(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
