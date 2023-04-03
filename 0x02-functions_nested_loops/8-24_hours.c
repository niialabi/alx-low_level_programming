#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - printing 24hr
 * Description: prints 00:00 - 23:29
 */

void jack_bauer(void)
{
	int j;
	int i;

	for (i = 0; i < 60; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
		}
	}

}
