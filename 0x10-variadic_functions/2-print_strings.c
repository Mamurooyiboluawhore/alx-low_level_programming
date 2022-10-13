#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints string followed by a new line
 * @separator: string to ve printed between strings
 * @n: number of string passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *ptr;
	unsigned int indx;
	va_list list;

	va_start(list, n);
	for (indx = 0; indx < n; indx++)
	{
		ptr = va_arg(list, char *);
		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");
		if (indx < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
