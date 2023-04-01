#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *string_toupper - function to upper
 * @' ': parameter from src
 * Description: function changes lower case to upper case
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = (int)str[i] - 32;
		}
	}
	return (str);
}
