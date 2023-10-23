#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int itd, itc;
	char *p;

	itd = 0;
	while (s[itd] != '\0')
	{
		itc = 0;
		while (accept[itc] != '\0')
		{
			if (accept[itc] == s[itd])
			{
				p = &s[itd];
				return (p);
			}
			itc++;
		}
		itd++;
	}

	return (0);
}
