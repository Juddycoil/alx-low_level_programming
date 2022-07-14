#include "main.h"
#include <string.h>

/**
* _strcmp - compares two strings
* @s1: param 1
* @s2: param 2
* Return: 0
*/
int _strcmp(char *s1, char *s2)
{
int value;

value = strcmp(s1, s2);
if (value == 0)
{
_putchar('0');
}

else if (s1 < s2)
{
_putchar('-');
}
else
{
_putchar('+');
}
return (0);
}
