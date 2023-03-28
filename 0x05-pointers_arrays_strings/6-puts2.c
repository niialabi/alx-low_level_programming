#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - PUTS2 FUNCTION
 *
 * Description: prints every other character of a string
 * @str: string para in main func
 */
void puts2(char *str)
{
	int i;
	int len;
	char temp;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		temp = str[i];
		_putchar(temp);
	}
	_putchar ('\n');
}
