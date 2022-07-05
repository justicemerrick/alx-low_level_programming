#include "main.h"

/**
 * _isalpha - checks for alphabetical characters
 * @c: a character to check
 * Return: 1 if 'c' for lowercase or uppercase, or 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
