#include "main.h"
/**
 * _strlen_recursion - a function that the length
 * @s: String
 *
 * Return: 1
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		{
			return (0);
		}
	return (1 + _strlen_recursions(s + 1));
}
