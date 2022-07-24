#include "main.h"

/**
 * print_most_numbers - print number from zero to nine
 * except two and four
 */
void print_most_numbers(void)
{
int x = 0;
{
	while ((x <= 9) && (x != 2) && (x != 4))
		x++;
}
{
	_putchar(x + '0');
}
_putchar(10);

}
