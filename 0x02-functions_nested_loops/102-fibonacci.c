#include<stdio.h>
/**
 * main - Entry point
 * Return: prints the first 50 Fibonacci numbers
 */
int main(void)
{
	int i;
	unsigned long first = 1, second = 2, sum;

	printf("%lu, %lu", first, second);
	for (i = 3; i <= 50; i++)
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
