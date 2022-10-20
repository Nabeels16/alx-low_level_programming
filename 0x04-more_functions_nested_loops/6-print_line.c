#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of '_' to be printed
 */
void print_line(int n)
{
	int nen;

	if (n > 0)
	{
		for (nen = 0; nen < n; nen++)
			_putchar('_');
	}

	_putchar('\n');
}
