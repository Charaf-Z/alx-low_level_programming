#include "mian.h"
/**
 * print_alphabet_x10 - print 10 time the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_puchar(ch);
		}
		_putchar('\n');
	}
}
