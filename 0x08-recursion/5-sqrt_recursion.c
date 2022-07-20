#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Square root
 * @n: integer parameter
 * @y: integer y
 *
 * Return: sqrt
 */
int _sqrt(int n, int y)
{
	if (n < 0)
		return (-1);
	if ((y * y) > n)
		return (-1);
	if (y * y == n)
		return (y);
	return (_sqrt(n, y + 1));
}

