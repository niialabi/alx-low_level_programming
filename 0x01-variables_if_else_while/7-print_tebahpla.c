#include <stdio.h>
/**
 * main - Entry point
 * print out lowercase a-z using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
{
	putchar(i);
}
	putchar ('\n');
	return (0);
}
