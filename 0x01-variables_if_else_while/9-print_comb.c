#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	if (n == '9')
	{
		continue;
	} else
	{
		putchar(',');
		putchar(' ');
	}
	return (0);
}
