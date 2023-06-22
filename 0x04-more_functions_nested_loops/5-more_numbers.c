#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int nb, i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			nb = j;
			if (j > 9)
			{
				_putchar((j / 10) + 48);
				nb = j % 10;
			}
			_putchar(nb + 48);
		}
		_putchar('\n');
	}
}
