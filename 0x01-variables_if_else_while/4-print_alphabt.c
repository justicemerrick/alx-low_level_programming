#include <stdio.h>
/**
 * main - Entry point
 *
 * a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (correct)
 */
int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	if (alphabet == 'q')
		continue;

	else if (alphabet == 'e')
		continue;

	putchar (alphabet);
}

putchar ('\n');

return (0);
}
