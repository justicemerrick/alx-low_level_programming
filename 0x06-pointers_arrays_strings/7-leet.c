#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @c: input value
 *
 * Return: the value in c
 */
char *leet(char *c)
{
	int x, y;
	char i[] = {'A', 'E', 'O', 'T', 'L'};
	char j[] = {'4', '3', '0', '7', '1'};

	for (x = 0; c[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (c[x] == i[y])
			{
				c[x] = j[y];
			}
		}
	}
	return (c);
}
