#include "main.h"
/**
* print_chessboard - prints an 8x8 chessboard
* @a: pointer to an 8x8 array of chars
*
* Description: Loops through each row and column of the
* array and prints each character.
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
