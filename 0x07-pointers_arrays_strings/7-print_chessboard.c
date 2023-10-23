#include "main.h"

/**
 * print_chessboard - prints chessboard.
 *
 * @a: rows.
 * Return: nothing.
*/

void print_chessboard(char (*a)[8])
{
	int itd; itc;

	for (itd = 0; itd < 8; itd++)
	{
		for (itc = 0; itc < 8; itc++)
		{
			_putchar(a[itd][itc]);
		}
		_putchar('\n');
	}
}
