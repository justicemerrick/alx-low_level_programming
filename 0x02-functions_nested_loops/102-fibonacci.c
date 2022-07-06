#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	Long int i, x, y, next;

	x = 1;
	y = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (x != 20365011074)
		{
			printf("%ld, ", x);
		}
		else
		{
		printf("%ld\n", x);
		}

		next = x + y;
		x = y;
		y = next;
	}
	return (0);
}
