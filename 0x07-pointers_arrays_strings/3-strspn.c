#include "main.h"
/**
 * _strspn - gets the lenth of a prefix substring.
 * @s: Initial segment.
 * @accept: Accepted bytes.
 * Return: The number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y, z = 0;

	while (accept[x])
	{
		y = 0;

		while (s[y] != 32)
		{
			if (accept[x] == s[y])
			{
				z++;
			}

			y++;
		}

		x++;
	}
	return (z);
}
