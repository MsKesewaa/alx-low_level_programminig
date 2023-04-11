#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * @argv: The arguments' values
 * Return: Always
 */
int main(int argc, char **argv)
{
	int n1, n2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		result = n1 * n2;
		printf("%d\n", result);
		return (0);
	}
}
