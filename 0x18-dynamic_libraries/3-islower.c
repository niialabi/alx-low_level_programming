#include "main.h"
/**
 * _islower - Entry point
 * Checkes wherether a specified character is lower case or not
 * @c: alpha to be checked
 * Return: 0 // 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
