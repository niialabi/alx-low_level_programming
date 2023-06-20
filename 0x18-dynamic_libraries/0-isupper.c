#include "main.h"
/**
 * _isupper - Checks if char is uppercase
 * @c: represents the char
 * Description: the program's description
 *
 * Return: Always 1 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 95)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	return (0);
}
