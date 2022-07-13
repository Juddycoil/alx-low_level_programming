#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: parameter for string
 *
 * Return: nothing
 */
void print_rev(char *s)
{

for (; *s != '\0'; --s)
{
	_putchar(*s);
}
	_putchar('\n');
}
