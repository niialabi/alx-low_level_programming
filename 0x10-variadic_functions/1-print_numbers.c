#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print num
 * @separator: separator
 * @n: number of args
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	{
		for (i = 0; i < n; i++)
		{
			if (separator && i == n - 1)
				printf("%d\n", va_arg(args, int));
			printf("%d%s", va_arg(args, int), separator);
		}
	}
}
