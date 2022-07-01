#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int ch;
	int n;
	for (ch = 48; ch<= 57; ch++)
	{
		for (n = 48; n <= 57; n++)
		{
			putchar(ch);
			putchar(n);
			if (ch != 57 || n != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
