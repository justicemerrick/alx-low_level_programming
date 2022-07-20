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
 * @x: integer x
 * @y: integer y
 *
 * Return: sqrt
 */
int _sqrt(int x, int y)
{
	if (x < 0)
		return (-1);
	if ((y * y) > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (_sqrt(x, y + 1));
}

