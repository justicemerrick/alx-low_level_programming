#include "main.h"
/**
 * puts2 - a function that prints every other
 * character of a string, starting with
 * the first character, followed by a new line.
 * @str: Input string
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int x = 0;

	while (x >= 0)
	{
		if (str[x] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
}
