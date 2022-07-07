#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: the size to be printed
 *
 * Return: 0
 */
void print_square(int size)
{
	int length, height;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (height = 0; height < size; height++)
				_putchar('#');

			if (length == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
