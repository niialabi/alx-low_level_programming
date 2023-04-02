#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - func print last digit
 * @a: int to be checked
 * Description: returns value of last dig.
 * Return: value of last digit
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		a = (-a % 10);
	}
	else
	{
		a = (a % 10);
	}
	_putchar(a + '0');
	return (a);
}
