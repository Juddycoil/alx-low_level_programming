#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: parameter value 1
 * @b: parameter value 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
