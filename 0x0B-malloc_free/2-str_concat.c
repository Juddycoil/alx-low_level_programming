#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *str_concat - concatenates two strings space in heap
* @s1: first string
* @s2: second string
* Return: string or NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *a, *b, *c;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	}
	a = (char *)malloc(i * sizeof(char));
		s1 = a;
	b = (char *)malloc(j * sizeof(char));
		s2 = b;
	c = strcat(a, b);
	{
		if (c == NULL)
			return (NULL);
	}
	return (s1);
}
