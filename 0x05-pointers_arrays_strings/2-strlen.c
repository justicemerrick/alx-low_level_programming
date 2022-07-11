#include "main.h"

/**
 * _strlen - a function that returns
 * the length of a string
 * @s: The string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length); /*Return the length of the string*/
}
