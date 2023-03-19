#include <stdio.h>
/**
 * main - Entry point
 * print out lowercase a-z using putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
{
	putchar(i);
}
	return (0);
}
