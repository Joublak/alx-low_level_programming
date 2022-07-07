#include "main.h"
/**
 * print_alphabet - Alphabet in lowercase
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char u;

	for (u = 'a'; u <= 'z'; u++)
	{
		_putchar(u);
	}
	_putchar('\n');
}
