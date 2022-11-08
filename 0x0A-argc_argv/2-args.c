#include <stdio.h>
#include "main.h"
/**
 * main - Prints program name, followed by a new line.
 * @argc: number of comman line argurments.
 * @argv: array that contains program command line.
 * Return: 0 - success.
 */
int main(int argc, char *argv[]);
{
/*declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE -  each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
	return (0);
}
