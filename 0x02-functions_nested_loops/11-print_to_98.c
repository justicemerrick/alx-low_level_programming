#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints natural numbers fro 0 to 98
 * @n: input integer
 * Return: 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
