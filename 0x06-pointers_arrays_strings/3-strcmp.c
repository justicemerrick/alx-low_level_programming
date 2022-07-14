#include "main.h"
#include <string.h>

/**
 * _strcmp - a function that compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 when s1 is equal to s2, and an int value if not.
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0;

	while (y == 0)
	{
		if ((*(s1 + x) == '\0') && (*(s2 + x) == '\0')
			break;
		y = *(s1 + x) - *(s2 + x);
		x++;
	}

	return (y);
}
