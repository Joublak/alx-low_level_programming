#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: pointes to dest always
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\n'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\n';

	return (dest);
}
