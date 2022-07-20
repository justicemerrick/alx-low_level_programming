#include "main.h"
/**
 * factorial - a function that returns a factorial of a given number
 * @n: integer
 *
 * Return: 1 for success and -1 for failure
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
