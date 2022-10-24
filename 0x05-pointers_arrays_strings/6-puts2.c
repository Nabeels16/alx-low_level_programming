#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: the string
 */
void puts2(char *str)
{
	int y = 0;

	for (; str[y] != '\0'; y++)
	{
		if ((y % 2) == 0)
			_putchar(str[y]);
		else
			continue;
	}
	_putchar('\n');
}
