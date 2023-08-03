#include "main.h"

/**
 * get_endianness - function checks the endianness of the system
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned long int nbr = 1;

	return (*(char *)&nbr);
}
