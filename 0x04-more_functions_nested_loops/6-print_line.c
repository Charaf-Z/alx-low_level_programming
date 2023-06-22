#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of '_' that should be printed
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n--)
		{
			_putchar(95);
			putchar('\n');
		}
	}
}
