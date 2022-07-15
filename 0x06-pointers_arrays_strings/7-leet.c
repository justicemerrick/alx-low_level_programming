#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @c: input value
 *
 * Return: the value in c
 */
char *leet(char *c)
{
	int x = 0, y = 0, n = 5;
	char i[5] = {'A', 'E', 'O', 'T', 'L'};
	char j[5] = {'4', '3', '0', '7', '1'};

	while (c[x])
	{
		y = 0;

		while (y < 1)
		{
			if (c[x]  == i[y] || c[x] - 32 == i[b])
			{
				c[x] = j[y];
			}
			y++;
		}
		x++;
	}
	return (c);
}
