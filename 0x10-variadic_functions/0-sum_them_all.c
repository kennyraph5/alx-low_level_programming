#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all the parameters
 * @n: first argument
 * @...: an unknown number of args passed as parameters
 * Return: the sum, 0 if n is 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list pars;
	unsigned int i, sum = 0;

	va_start(pars, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pars, int);
	}
	va_end(pars);
	return (sum);
}
