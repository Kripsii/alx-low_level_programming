#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: integer
 * Return: interger factorial
 */
int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
