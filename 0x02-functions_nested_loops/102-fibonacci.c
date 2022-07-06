#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	Long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			print(", ");
		}
		i++;
	}
	putchar('\n');

	return (0);
}
