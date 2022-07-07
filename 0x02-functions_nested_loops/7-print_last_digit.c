#include "main.h"

/**
 * print_last_digit - function prints last digit of a number
 * @n: used for the argument of function
 * Return: integer value
 */
int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
	{
		c = c * -1;
	}

	_putchar('0' + c);
	return (c);
}
