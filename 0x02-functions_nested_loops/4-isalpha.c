#include "main.h"

/**
 * _isalpha - check a letter is lowercase
 * @c: check a chacter
 * Return: 1 if it's a letter and 0 for otehrs
 */
int _isalpha(int c)
{
	if ((c > 66 && c < 91) || (c > 98 && c < 123))
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
