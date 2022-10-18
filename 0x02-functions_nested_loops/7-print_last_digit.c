#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @u: parameter
 * Return: the value of the last digit
 */
int print_last_digit(int u)
{
	if (u < 0)
		u = -u;
	return (u % 10);
}
