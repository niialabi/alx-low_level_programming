#include "main.h"
#include <stdio.h>
/**
 * _isalpha - function to check if alpha
 * @c: variable to be checked
 * Description: function check is variable is alpha
 * Return: 1 // 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
