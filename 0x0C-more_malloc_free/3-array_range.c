#include "main.h"

/**
 * array_range - Function that creates an array of integers.
 * @min: min value.
 * @max: max value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *x;
	int i;

	if (min > max)
		return (NULL);

	x = malloc(sizeof(*x) * ((max - min) + 1));

	if (x == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		x[i] = min;

	return (x);
}
