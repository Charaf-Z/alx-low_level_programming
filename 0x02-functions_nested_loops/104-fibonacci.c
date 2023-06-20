#include<stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int count = 2, limit = 98;
	unsigned long first = 1, second = 2, next;

	printf("%lu, %lu, ", first, second);
	while (count < limit)
	{
		next = first + second;
		printf("%lu", next);
		if (count < (limit - 1))
		{
			printf(", ");
		}
		first = count;
		second = next;
		count++;
	}
	printf("\n");
	return (0);
}
