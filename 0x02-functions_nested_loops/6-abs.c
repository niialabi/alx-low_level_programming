#include "main.h"
#include <stdio.h>
/**
 * _abs - conversion function
 * Description: conversts to absolute value
 * @a: parameter to be converted
 * Return: absolute value
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = -a;
	}
	else
	{
		a  = a;
	}
	return (a);
}
