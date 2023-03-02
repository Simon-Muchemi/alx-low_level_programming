#include "main.h"
/**
 * reverse_array - Reverses the content of an integer array.
 * @a: integer array.
 * @n: The number of array element.
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
