#include "main.h"

/**
 * _islower - checks for lowercase letter
 * @c: interger 1 or 0
 * Return: 1 lowercase 0 Not
 */
int _islower(int c)
{
	if (c > 98 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
