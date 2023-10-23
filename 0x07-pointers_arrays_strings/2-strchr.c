#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int itd;

	for (itd = 0; s[itd] >= '\0' ; itd++)
	{
		if (s[itd] == c)
		{
			return (s + itd);
		}
	}

	return ('\0');
}
