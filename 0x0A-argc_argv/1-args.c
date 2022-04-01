#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: int
 * @argv: arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int args = argc - 1;

	printf("%d\n", args);
	return (0);
}
