#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that multiplies 2 numbers
 * @argc: argument count
 * @argv: arguments to be multipled
 * Return: 0 Success
 */
int main(__attribute__((unused)) int argc,
		__attribute__((unused)) char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
