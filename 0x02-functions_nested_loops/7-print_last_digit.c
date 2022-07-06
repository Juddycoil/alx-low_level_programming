#include "main.h"

/**
 * print_last_digit - print last digit of a number
 *@n: the passed arg
 * Return: print the last digit
 */
int print_last_digit(int n)
{
int lastdigit = n % 10;
if (lastdigit < 0)
lastdigit *= -1;

	_putchar(lastdigit + '0');
return (lastdigit);

}
