#include <stdio.h>
/**
 * main - Entry point
 * program to print all possible combinations of single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			putchar (32);
			continue;
		}
		putchar (44);
		putchar (32);
	}
	return (0);
}
