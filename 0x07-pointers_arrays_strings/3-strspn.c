#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int itd, itc;

	for (itd = 0; s[itd] != '\0'; itd++)
	{
		for (itc = 0; accept[itc] != s[itd]; itc++)
		{
			if (accept[itc] == '\0')
				return (itd);
		}
	}
	return (itd);
}
