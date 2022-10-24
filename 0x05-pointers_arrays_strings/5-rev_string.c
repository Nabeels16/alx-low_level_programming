#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int h = 0;
	int j;

	while (s[h] != '\0')
		h++;
	for (j = 0; j < h; j++)
	{
		h--;
		rv = [j];
		s[j] = s[h];
		s[h] = rv;
	}
}
