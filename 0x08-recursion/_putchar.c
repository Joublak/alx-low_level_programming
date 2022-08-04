#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 *
 * Return: on succes 1
 * On error, -1 is returned and errno is set appropriatelu.
 */

int _putchar (char c)
{v
	return(write, (&c, 1));
}
