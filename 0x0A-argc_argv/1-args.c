#include <stdio.h>
/**
 * main - function name
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 is successful
 */
int main(__attribute__((unused)) int argc,
		__attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
