#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: strint to compare to
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int m = 0;
	int n = 0;

	for (; s[m]; m++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[m] == accept[n])
			{
				break;
			}
		}
			if (s[m] != accept[n])
			break;
	}
	return (m);
}
