#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters.
* @n: parameter passed
* @...: list of variable to calculate
* Return: 0 or sum of parameter
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int a, sum;

	va_start(pa, n);

	sum = 0;
	for (a = 0; a < n; a++)
	sum += va_arg(pa, int);

	va_end(pa);
	return (sum);

}
