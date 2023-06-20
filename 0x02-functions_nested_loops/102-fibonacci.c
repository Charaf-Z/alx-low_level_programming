#include<stdio.h>
/**
 * main - Entry point
 * Return: prints the first 50 Fibonacci numbers
 */
int main(void)
{
	int i;
	unsigned long first = 0, second = 1, sum;

	for (i = 1; i <= 50; i++)
	{
		sum = first + second;
		printf("%lu", sum);
		first = second;
		second = sum;
		if (i != 50)
		{
			printf(", ");
		}
	}
	return (0);
}
