#include "main.h"
/**
 * print_number - prints an integer
 * @c: input int
 *
 * Return: Void.
 */
void print_number(int c)
{
	unsigned int n;

	n = c;

	if (c < 0)
	{
		_putchar('-');
		n = -c;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
