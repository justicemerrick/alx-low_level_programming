#include "main.h"
#include <ctype.h>

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: parameter to print
 *
 * Return: 1 if it is a digit and 0 if its not a digit.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
