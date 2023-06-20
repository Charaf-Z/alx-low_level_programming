#include<stdio.h>
/**
 * main - Entry point
 * Return: prints the sum of all the multiples of 3 or 5 below 1024
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("the sum of multiples of 3 or 5 below 1024 is: %d\n", sum);
	return (0);
}
	
