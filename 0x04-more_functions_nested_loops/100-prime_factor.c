#include <stdio.h>

/**
 * main - a program that finds and prints the largest
 * prime factor of the number 612852475143
 * Return: 0 Always
 */
int main(void)
{
	long int x = 612852475143;
	long int div;

	for (div = 2; div < x; div++)
	{
		if (x % div == 0)
		{
			x = x / div;
		}
	}
	printf("%ld\n", div);

	return (0);
}
