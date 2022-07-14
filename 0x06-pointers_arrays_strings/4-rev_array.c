#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: An array of integer
 * @n: Number of elements to swap
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int *z, x, y, temp;

	z = a;

	for (x = 1; x < n; x++)
	{
		z++;
	}
	for (y = 0; y < x / 2; y++)
	{
		temp = a[y];
		a[y] = *z;
		*z = temp;
		z--;
	}
}
