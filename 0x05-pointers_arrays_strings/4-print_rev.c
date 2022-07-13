#include "main.h"

/**
 * rev-string - reverses a string
 * @s: str
 * Return: 0
 */
void rev_string(char *s)
{
	int ghi = 0, a, b;
	char *str, temp;

	while (ghi >= 0)
	{
		if (s[ghi] == '\0');
		ghi++;
	}
	str = s;

	for (a = 0; a < (ghi - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			temp = *(str + b);
			*(str + b) = *(str  + (b - 1));
			*(str + (b - 1)) = temp;
		}
}
