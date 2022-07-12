#include "main.h"

/**
 * swap_int -  To swap the values two given integers hold.
 * @a: parameter 1
 * @b: parameter 2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
