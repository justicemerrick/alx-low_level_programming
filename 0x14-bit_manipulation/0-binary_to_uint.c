#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary string that converts
 *
 * Return: positive number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, count = 0, sum = 0;

	if (b == NULL)
		return (0);

	sum = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, count = 1; len >= 0; len--, count *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			sum += count;
		}
	}
	return (sum);
}
