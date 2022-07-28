#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: lower bound
 * @max: upper bound
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
