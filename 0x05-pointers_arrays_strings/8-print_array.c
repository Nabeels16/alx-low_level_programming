#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of values to be printed
 */
void print_array(int *a, int n)
{
	int w;

	for (w = 0; w < n; w++)
	{
		printf("%d", a[w]);
		if (w != n - 1)
			printf(", ");
	}

	printf("\n");
}
