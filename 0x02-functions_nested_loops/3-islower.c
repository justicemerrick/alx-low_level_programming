#include "main.h"

/**
 * _islower -> checks for lowercase character
 *
 * @c: a character argument
 * Return: 0 Always and 1 if 'c' is lowercase
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
