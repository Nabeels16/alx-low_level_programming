#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @u: parameter
 * Return: the value of the last digit
 */
int print_last_digit(int u)
{
	int y;

	y = u % 10;
	if (u < 0)
	{
		_putchar(-y + 48);
		return (-y);
	}
	else
	{
		_putchar(y + 48);
		return (y);
	}
}
