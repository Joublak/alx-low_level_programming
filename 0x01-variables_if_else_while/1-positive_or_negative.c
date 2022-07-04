#include <stdio.h>
/**
 * main - a program that assigns a number at random to a variable n
 * and prints if it is negative or posivite
 * Returen: Always 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n=rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0);
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{printf("%d is %s\n", n,"zero");
	}
	return (0);
}
