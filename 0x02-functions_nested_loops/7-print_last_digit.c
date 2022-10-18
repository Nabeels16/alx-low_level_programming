#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @u: parameter
 * Return: the value of the last digit
 */
int print_last_digit(int u)
{
	int y;

	if (u < 0)
		u = -u;
	y = u % 10;
	_putchar(y + '0');
	return (y);
}
