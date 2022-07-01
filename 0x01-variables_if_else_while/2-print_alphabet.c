#include <stdio.h>
/**
 * main - Entry point
 *
 * here is a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Correct)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

return (0);

}
