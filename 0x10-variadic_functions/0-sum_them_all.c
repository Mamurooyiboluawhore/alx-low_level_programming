#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up all parameters
 * @n: paramenters to be summed
 * Return: the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int indx;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (indx = 0; indx < n; indx++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
