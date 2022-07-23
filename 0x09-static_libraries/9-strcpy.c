#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - a function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: The pointer to the destination
 * @src: The pointer to source
 *
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (x >= 0)
	{
		*(dest + x) = *(src + x);
		if (*(src + x) == '\0')
			break;

		x++;
	}
	return (dest);
}
