#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print num
 * @separator: separator
 * @n: number of args
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *topr;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		topr = va_arg(args, char *);
		if (topr)
			printf("%s", topr);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
