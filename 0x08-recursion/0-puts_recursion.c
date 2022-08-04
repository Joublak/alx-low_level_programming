#include "main.h"

/**
 * _puts_recursion - This is a function to print a string follow by a new line
 * @s: The sgring to be printed
 */
void _puts_recursion(char *s)
{
	i f(*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
