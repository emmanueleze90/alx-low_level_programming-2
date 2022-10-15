#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'The program description
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int test;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	test = n % 10;
	if (test > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, test);
	} else if (test == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, test);
	} else if (test < 6 && test != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, test);
	}
	return (0);
}
