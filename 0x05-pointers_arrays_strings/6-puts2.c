#include "main.h"
#include <string.h>

/**
 * puts2 - print every other character of a string
 * @str: parameter
 *
 * Return: nothing
 */
void puts2(char *str)
{
int len, a;

len = strlen(str);
for (a = 0; a < len; a += 2)
	_putchar(str[a]);
_putchar('\n');

}
