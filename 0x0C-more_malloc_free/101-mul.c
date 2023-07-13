#include "main.h"

#define ERR_MSG "Error"

/**
 * _error - handle error
 */

void _error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_digit - checks if the given string is a number
 * @s: string to be evaluated
 * Return: 0 (Success)
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * main - print the result of the multiplications of two numbers
 * @argc: number of arguments
 * @argv: arguments values
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int *result, pst = 1, s1_len, s2_len, dg1, dg2, carry, i;
	(void)argc;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		_error();
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	result = calloc(s1_len + s2_len, sizeof(int));
	if (!result)
		return (1);
	for (s1_len -= 1; s1_len >= 0; s1_len--)
	{
		dg1 = s1[s1_len] - 48;
		carry = 0;
		pst = _strlen(s1) - s1_len;
		for (s2_len = _strlen(s2) - 1; s2_len >= 0; s2_len--, pst++)
		{
			dg2 = s2[s2_len] - 48;
			carry += result[pst - 1] + (dg1 * dg2);
			result[pst - 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[pst - 1] = carry;
	}
	pst--;
	for (pst -= 1; pst >= 0; pst--)
		_putchar(result[pst] + 48);

	_putchar('\n');
	free(result);
	return (0);
}
