#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: length of argument
 * @argv: array of argument
 *
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		int i = atoi(argv[1]) * atoi(argv[2]);

		printf("%i\n", i);
	}
}

