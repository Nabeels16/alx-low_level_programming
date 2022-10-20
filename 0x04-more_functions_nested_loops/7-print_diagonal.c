#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
		_putchar('\n');

	for (j = 0; j < n; j++)
	{
		for (k = 0; k < j; k++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
