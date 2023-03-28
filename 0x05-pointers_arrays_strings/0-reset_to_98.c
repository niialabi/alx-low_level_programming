#include "main.h"
#include <stdio.h>
int _putchar(char c);
/**
 * reset_to_98 -  Sets variable to 98
 *
 * @n: interger value to be set in function
 * Description: takes n value and updates in main
 */

void reset_to_98(int *n)
{
	*n = 98;
	_putchar ('\n');
	return;
}
