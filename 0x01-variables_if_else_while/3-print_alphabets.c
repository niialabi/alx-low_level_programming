#include <stdio.h>
/**
 * main - Entry point
 * print out lowercase a-z using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int o;

	for (i = 97; i <= 122; i++)
{
	putchar(i);
}
	for (o = 65; o <= 90; o++)
{
	putchar(o);
}
	putchar ('\n');
	return (0);
}
