#include "main.h"
/**
 * cap_string - a function that changes all lowercase
 * letters of a string to uppercase
 * @c: input string
 *
 * Return: the pointer to dest.
 */
char *cap_string(char *c)
{
	int x = 0, y;
	char str[] = {44, 59, 46, 123, 125, 32, 33, 10, 63, 9, 34, 41, 40};

	while (c[x] != '\0')
	{
		if (x == 0 && c[x] >= 97 && c[x] <= 122)
		{
			c[x] = c[x] - 32;
		}
		y = 0;
		while (str[y] != '\0')
		{
			if (str[y] == c[x] && (c[x + 1] >= 97 && c[i + 1] <= 122))
			{
				c[x + 1] = c[x + 1] - 32;
			}
			y++;
		}
		x++;
	}
	return (c);
}
