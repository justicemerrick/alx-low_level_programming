#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 1-; x++)
	{
		for(y = 0; y < 15; y++)
		{
			if (y >= 10)
				_putchar((y / 10) + 48);
				_putchar((y % 10) + 48);
		}
		_putchar('\n');
	}
}
