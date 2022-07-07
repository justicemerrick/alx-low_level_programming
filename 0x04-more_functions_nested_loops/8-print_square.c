#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: the size of the square to be printed
 *
 * Return: 0
 */
void print_square(int size)
{
	int length, height;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (length = 0; length < size; lenght++)
		{
			for (height = 0; height < size; height++)
			{
				_putchar('#');
			}
			if (first == size - 1)
				continue;
			_putchar('\n');
		}
		_putchar('\n');
	}
}
