#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	int x, y;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char boolean;

	for (x = 0; s[x] != '\0'; x++)
	{
		boolean = 0;
		for (y = 0; b[y] != '\0' && boolean == 0; y++)
		{
			if (s[x] == b[y])
			{
				s[x] = a[y];
				boolean = 1;
			}
		}
	}

	return (s);
}
