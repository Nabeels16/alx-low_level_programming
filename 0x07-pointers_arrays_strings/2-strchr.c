#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates a character
 * @s: string
 * @c: the character
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
