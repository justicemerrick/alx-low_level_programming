#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int ls1, ls2, lx, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lx = ls1 + n;

	x = malloc(lx + 1);

	if (x == NULL)
		return (NULL);

	for (i = 0; i < lx; i++)
		if (i < ls1)
			x[i] = s1[i];
		else
			x[i] = s2[i - ls1];

	x[i] = '\0';

	return (x);
}
