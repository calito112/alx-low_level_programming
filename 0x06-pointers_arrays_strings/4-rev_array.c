#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - reverse an array of integers
 * @a: pointer to an array of integer
 * @n: size of a
 */

void reverse_array(int *a, int n)
{
	int *tmp = (int *)malloc(n * sizeof(int));
	int i, j;

	for (i = 0; i < n; i++)
		tmp[i] = a[i];


	for (i = n - 1, j = 0; i >= 0; i--, j++)
		a[j] = tmp[i];
}
