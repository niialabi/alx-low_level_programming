#include "main.h"
#include <stdio.h>
/**
 * print_sign - funtion to print sign of int
 * @n: int variable
 * Description: prints +/0/-
 * Return: 1/0/-1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n < 0)
	{
		return (-1);
		_putchar(45);
	}
	else if (n == 0)
	{
		_putchar(48);
	}
	return (0);
}
