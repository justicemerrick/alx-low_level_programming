#include "main.h"

/**
 * print_most_numbers - a function that prints the numbersi
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar((n % 10) + '0');
		}
	}
	_putchar('\n');
}
