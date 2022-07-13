#include "main.h"

/**
 * _strlen - Funtion to print the length of a string.
 * @s: length of string to be printed
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
