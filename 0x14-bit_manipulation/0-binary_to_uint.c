#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nbr = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != 48 && *b != 49)
			return (0);
		nbr = nbr * 2 + (*b++ - 48);
	}
	return (nbr);
}
