#include "main.h"
#include "_putchar.c"
/**
 * main - Multiplies two integers a & b
 * @a: Integer 1
 * @b: Integer 2
 * Decription: This program multiplies 2 integers
 *
 * Return: Sucess is if we get results 100352 - -1646592
 */

int mul(int a, int b);
int _putchar(char c);

int main(void)
{
	int i = 2;
	int j = 5;
	int res;

	res = mul(i, j);
	_putchar(res);
	_putchar('\n');

	return (0);
}

