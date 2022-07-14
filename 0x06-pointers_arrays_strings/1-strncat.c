#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings with a given number of bytes
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the reulting string dest
 */
char *_strcat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
