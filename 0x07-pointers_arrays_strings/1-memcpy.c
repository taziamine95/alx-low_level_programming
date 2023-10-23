#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: lenght of src to be copied
 *
 * Return: the pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itd;

	for (itd = 0; itd < n; itd++)
	{
		dest[itd] = src[itd];
	}
	return (dest);
}
