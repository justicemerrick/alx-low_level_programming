#include <stdio.h>
#include "main.h"
/**
 * print_number - prints an integer
 * @c: input integer
 *
 * Return: void.
 */
void print_number(int c)
{
	unsigned int x, y, z;

	if (c < 0)
	{
		_putchar(45);
		x = c * -1;
	}
	else
	{
		x = c;
	}
	y = x;
	z = x;

	while (y > 9)
	{
		y /= 10;
		z *= 10;
	}
	for (; z >= 1; z /= 10)
	{
		_putchar(((x / z) % 10) + 48);
	}
}
