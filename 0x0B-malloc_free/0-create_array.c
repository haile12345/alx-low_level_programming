#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: length of strings
 * @c: actual character
 *
 * Return: initialized char array
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = (char *)malloc(size * sizeof(char));

	if (p == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}

