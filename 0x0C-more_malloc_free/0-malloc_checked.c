#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the memory size
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory;
	
	memory = malloc(b);
	if (memory == NULL)
		exit(98);

	return (memory);
}
