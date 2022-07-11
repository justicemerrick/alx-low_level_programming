#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: The string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int count = 0, n;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}

	if (count % 2 == 1)
		n = count / 2;
	else
		n = (count - 1) / 2;

	for (n++; n < count; n++)
		_putchar(str[n]);
	-putchar('\n');
}
