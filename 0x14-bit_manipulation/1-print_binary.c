#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8, printed = 0;

	while (bits)
	{
		if (n & 1L << --bits)
			_putchar(49), printed++;
		else if (printed)
			_putchar(48);
	}
	if (!printed)
		_putchar(48);
}
