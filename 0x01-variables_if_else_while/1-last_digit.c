#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstd = n % 10;
	if (lstd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lstd);
	}
	else if (lstd == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lstd);

	}
	else if (lstd < 6 && 6 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lstd);
	}
	return (0);
}
