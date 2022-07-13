#include "main.h"

/**
 * _atoi - changes a string to an int
 * @s: string to be changed
 *
 * Return: the converted int
 */
int _atoi(char *s)
{
int a = 1;
unsigned int num = 0
	do {
	if (*s == '-')
		a *= -1;
	else if (*s >= '0' && *s <= '9')
		num = num * 10 + (*s - '0');
	else if (num > 0)
		break;
	} while (*s++);
return (num * a);

}