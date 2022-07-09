#include "main.h"

/**
 * print_sign - sign of a number to print.
 * @c: n is an interger
 * Return: 1 and print +, if n is greater than zero;
 * or 0 and print 0 if n is zero;
 * or -1 and print - if n is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
