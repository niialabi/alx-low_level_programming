#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int o;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (o = 97; o <= 102; o++)
	{
		putchar(o);
	}
	putchar ('\n');
	return (0);
}
