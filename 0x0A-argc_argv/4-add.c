#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Function that multiplies 2 numbers
 * @argc: argument count
 * @argv: arguments to be multipled
 * Return: 0 Success
 */
int main(__attribute__((unused)) int argc,
		__attribute__((unused)) char *argv[])
{
	int  j, i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			continue;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	for (j = 1; j < argc; j++)
	{
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
