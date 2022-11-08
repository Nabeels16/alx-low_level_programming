#include <stdio.h>
/**
 * main - Prints program name, followed by a new line.
 * @argc: number of comman line argurments.
 * @argv: array that contains program command line.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
