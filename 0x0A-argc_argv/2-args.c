#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array with the arguments in string
 *
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
