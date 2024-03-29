#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - function that prints a name
* @name: name
* @f: pointer to print
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
