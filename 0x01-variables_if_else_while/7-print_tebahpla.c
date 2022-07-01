#include <stdio.h>
/**
 * main - Entry point
 *
 * a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (correct)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 122; alphabet >= 97; alphabet--)

	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
