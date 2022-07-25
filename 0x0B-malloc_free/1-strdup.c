#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - return pointer with copy of string to new space in memory
* @str: string param
* Return: 0 or pointer to string
*/

char *_strdup(char *str)
{
	char *a;
	int i = 1, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
		i++;
	a = (char *)malloc(i * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);
	while (j < i)
	{
		a[j] = str[j];
		j++;
	}
	a[j] = '\0';
	return (a);
}
