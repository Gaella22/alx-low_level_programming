#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int d, c;

	for (d = 0; d < n--; d++)
	{
		c = a[d];
		a[d] = a[n];
		a[n] = c;
	}
}
