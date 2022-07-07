#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of lines to be printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, number;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (number = 0; number < n; number++)
		{
			for (i = 0; i < number; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

