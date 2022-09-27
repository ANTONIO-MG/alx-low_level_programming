#include "main.h"

/**
  * print_chessboard - Print the chessboard
  * @a: array of pieces
  * @x: horizontaerticall coordinates of the board
  * @y: vertical coordinates of the board
  * Return: Nothing.
  */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}

		_putchar('\n');
	}
}
