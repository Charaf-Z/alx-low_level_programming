#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of '_' that should be printed
 */
void print_line(int n)
{
	int nb_;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (nb_ = 1; nb_ <= n; nb_++)
			_putchar(95);
		_putchar('\n');
	}
}
