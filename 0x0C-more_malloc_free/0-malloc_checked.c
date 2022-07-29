#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - memory allocation with malloc
 * @b: byte allocation
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
