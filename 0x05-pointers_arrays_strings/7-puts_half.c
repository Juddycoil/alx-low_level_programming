#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a strig
 * @str: parameter
 *
 * Return: nothing
 */
void puts_half(char *str)
{
int a, b, y;

a = strlen(str);
if (a % 2 == 1)
	b = a / 2 + 1;
else
	b = a / 2;
for (y = b; y < a; y++)
	_putchar(str[y]);
	_putchar('\n');

}
