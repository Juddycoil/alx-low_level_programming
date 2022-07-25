#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *str_concat - concatenates two strings space in heap
* @s1: first string
* @s2: second string
* Return: string or NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, l = 0, h = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	l = i + j;
	c = (char *)malloc(l * sizeof(char) + 1);
	if (c == NULL)
		return (NULL);
	j = 0;
	while (h < l)
	{
		if (h < i)
			c[h] = s1[h];
		if (h >= i)
		{
			c[h] = s2[j];
			j++;
		}
		h++;
	}
	c[h] = '\0';
	return (c);
}
