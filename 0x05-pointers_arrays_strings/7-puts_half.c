#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string to print it
 */
void puts_half(char *str)
{
	int len;

	while (srt[len])
		len++;
	len++;
	for (len /= 2; str[len] != '\0'; len++)
		_putchar(str[len]);
	_putchar('\n');
}
