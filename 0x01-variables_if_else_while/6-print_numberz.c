#include <stdio.h>
/**
 *main - Entry point
 *Print using putchar function
 *Retrun: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i=48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar ('\n');
	return (0);
}
