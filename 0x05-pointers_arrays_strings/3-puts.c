#include "main.h"

/**
 * _puts - print a string followed by a new line
 * @str: parameter to _put
 * Return: nothing
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);

}
_putchar('\n');
}
