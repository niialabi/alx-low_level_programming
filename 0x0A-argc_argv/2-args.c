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
	int i;

	for (i = 0; i < argc; i++)
	{	
		printf("%s\n", argv[i]);
	}
return (0);
}
