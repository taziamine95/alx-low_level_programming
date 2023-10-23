#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itd;

	for (itd = 0; n > 0; itr++, n--)
	{
		s[itd] = b;
	}

	return (s);
}
