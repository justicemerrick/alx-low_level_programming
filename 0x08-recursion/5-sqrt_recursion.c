#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: 1
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
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}

