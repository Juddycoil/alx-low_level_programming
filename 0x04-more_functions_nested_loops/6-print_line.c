#include "main.h"

/**
 * print_line - print a straight line
 * @n: parameter
 *
 * Return: nothing
 */

void print_line(int n)
{
int a;

if (n <= 0)
	_putchar(10);
else
{
	for (a = 0; a < n; a++)
	_putchar(95);
}
_putchar(10);
}
