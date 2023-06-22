#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1 ; row <= size ; row++)
		{
			for (col = 1; col <= size; col++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
