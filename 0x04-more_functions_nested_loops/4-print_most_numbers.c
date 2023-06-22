#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * not 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int nb;

	for (nb = 48; nb <= 57; nb++)
		if ((nb != 50) && (nb != 52))
			_putchar(nb);
	_putchar('\n');
}
