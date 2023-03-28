#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Reverse string function
 * @s: char pointer value
 *
 * Description: Function reverses any string
 */
void rev_string(char *s)
{
	char temp;
	int len;
	int i;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
