#include "main.h"

/**
 * print_chessboard - prints chessboard.
 *
 * @a: rows.
 * Return: always 0 (Success)
*/

void print_chessboard(char (*a)[8])
{
	int itd;
	int itc;

	for (itd = 0; itd < 8; itd++)
	{
		for (itc = 0; itc < 8; itc++)
		{
			_putchar(a[itd][itc]);
		}
		_putchar('\n');
	}
}
