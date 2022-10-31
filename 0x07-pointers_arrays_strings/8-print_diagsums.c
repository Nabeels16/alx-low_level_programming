#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: the matrix
 * @size: the square size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int n;
	int sum1 = 0;
	int sum2 = 0;

	for (n = 0; n < size * size; n++)
	{
		if (n % (size + 1) == 0)
		{
			sum1 += a[n];
		}
		if (n % (size - 1) == 0 && (n > 0 && (n < (size * size - 1))))
		{
			sum2 += a[n];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
