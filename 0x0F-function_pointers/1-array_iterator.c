#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a parameter in array
 * @array: array
 * @size: size of array
 * @action: pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
