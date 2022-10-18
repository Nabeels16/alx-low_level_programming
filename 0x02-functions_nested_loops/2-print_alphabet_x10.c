#include "main.h"
/**
 * print_alphabet_x10 - print alphabets
 */

void print_alphabet_x10(void)
{
	int n;
	int y;

	for (y = 0; y < 10; y++)
	{

		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
