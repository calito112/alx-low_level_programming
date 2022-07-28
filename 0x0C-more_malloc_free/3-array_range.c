
#include <string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the newly created array if successful
 */

int *array_range(int min, int max)
{
	int range, i = 0,  *p;

	if (min > max)
		return (NULL);

	range  = max - min;
	p = malloc((range + 1) * sizeof(*p));

	if (p == NULL)
		return (NULL);

	for (range = min; range <= max; range++)
		p[i++] = range;
	return (p);
}
