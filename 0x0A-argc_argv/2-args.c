#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: int
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		for ( ; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
