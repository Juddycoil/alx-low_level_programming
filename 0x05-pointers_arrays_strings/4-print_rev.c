#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: parameter for string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int b, e, c = 0;

while (s[c] != '\0')
	c++;
e = c - 1;

for (b = 0; b < c; b++)
{
s[b] = s[e];
e--;
}
s[b] = '\0';
{
	_putchar(*s);
}
	_putchar('\n');
}
