#include "main.h"
/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase
 * @c: string to be returned
 *
 * Return: the pointer to dest.
 */
char *string_toupper(char *c)
{
	int x = 0;

	while (c[x] != '\0')
	{
		if (c[x] >= 97 && c[x] <= 122)
			c[x] = c[x] - 32;
		x++;
	}
	return (c);
}
