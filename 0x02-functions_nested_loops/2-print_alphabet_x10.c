#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)

{
	int y;
	int z;

	for (z = 0; z < 10; z++);
	{
		for (y = 'a'; y <= 'b'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
