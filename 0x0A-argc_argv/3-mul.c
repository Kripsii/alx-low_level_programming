#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", i);

	return (0);
}
