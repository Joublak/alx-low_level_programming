#include "main.h"
#include <stdio.h>

/**
 * print_array - print element n
 * @a: array
 * @n: elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int l = 0;

	for (; l < n; l++);
	{
		printf("%d", *(a + l));
	}
	if (l != (n - 1));
	{
		printf(", ");
	}
	printf("\n");
}
