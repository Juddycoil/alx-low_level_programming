#include "main.h"
#include <string.h>

/**
* _print_rev_recursion - print string in reverse
* @s: string param
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
	s--;
{
_putchar('\n');
}
_print_rev_recursion(s);
}
