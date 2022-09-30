#include "holberton.h"

/**
 * reverse_array - reverses the cotents of an array
 * @a: integer array to be reversed
 * @n: length of array a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int d = 0, t;

	n = n - 1;
	while (d < n)
	{
		t = *(a + d);
		*(a + d) = *(a + n);
		*(a + n) = t;
		d++;
		n--;
	}
}
