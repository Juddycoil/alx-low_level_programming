#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *_strdup - return pointer with copy of string to new space in memory
* @str: string param
* Return: 0 or pointer to string
*/

char *_strdup(char *str)
{
	char *a;

	a = malloc(sizeof(char));
	str = _strdup(a);
	if (str == 0)
	{
		return (0);
	}
	return (str);


}
