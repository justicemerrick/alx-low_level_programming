#include "main.h"
/**
 * _strpbrk - function that searches a string for any set of bytes.
 * @s: source string
 * @accept: accepted characters
 *
 * Return: a pointer to the byte in s
 * that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x = 0, y;

	while (s[x])
	{
		y = 0;

		while (accepted[y])
		{
			if (s[x] == accept[y])
			{
				s += x;
					return (s);
			}
			y++;
		}
		x++;
	}
	return ('\0');
}
