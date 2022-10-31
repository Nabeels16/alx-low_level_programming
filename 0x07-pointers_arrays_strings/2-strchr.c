#include "main.h"
/**
 * *_strchr - character in a string
 * @s: string
 * @c: another char
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int y = 0, x;

	while (s[y])
		y++;
	for (x = 0; x < y; x++)
	{
		if (c == s[x])
			s += x;
		return (s);
	}
	return ('\0');
}
