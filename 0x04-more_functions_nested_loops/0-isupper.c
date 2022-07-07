#include "main.h"
#include <stdio.h>
/**
 * main - a function that checks for uppercase character
 * @c: character to be checked
 * Return: Always 0.
 */
int _isupper(int c)
{
	char i;
	int is_upper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			is_upper = 1;
	}
	return (is_upper);
}
