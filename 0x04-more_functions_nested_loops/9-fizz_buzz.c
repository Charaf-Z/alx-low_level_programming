#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nb;

	for (nb = 1 ; nb <= 100; nb++)
	{
		if (nb % 3 == 0 && nb % 5 != 0)
			printf("Fizz");
		else if (nb % 3 != 0 && nb % 5 == 0)
			printf("Buzz");
		else if (nb % 3 == 0 && nb % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", nb);

		if (nb != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
