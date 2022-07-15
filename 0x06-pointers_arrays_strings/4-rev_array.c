#include "main.h"

/**
* reverse_array - reverse the content of an array
* @a: an array
* @n: size of element in array
* Return: nothing
*/
void reverse_array(int *a, int n)
{
int *p, i, tmp, t;

p = a;
for (i = 0; i < n; i++)
	p++;
for (t = 0; t < i / 2; t++)
{
	tmp = a[t];
	a[t] = *p;
	*p = tmp;
	p--;
}
}
