#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - creates an array of char, with a specific char
* @size: size of memory
* @c: array param
* Return: 0 or pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc((size + 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[i] = '\0';
	return (a);

}
