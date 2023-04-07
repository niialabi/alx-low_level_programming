#include "main.h"
#include "string.h"
/**
 * factorial - main function
 * @n: integer value
 * Return: factorial result
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
