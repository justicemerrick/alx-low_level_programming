#include "main.h"
/**
 * is_prime - detects if an input number is a prime number
 * @x: same number as n
 * @y: number that iterates from 1 to n
 *
 * Return: 1 or -1
 */
int is_prime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (is_prime(x, y + 1));
}
/**
 * is_prime_number - detects if an input number ia a prime number
 * @n: input number
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
