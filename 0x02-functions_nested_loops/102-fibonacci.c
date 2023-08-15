#include "main.h"
/**
 * main - Entry point
 *
 * Description: The first 50 Fibonacci numbers
 * Return: always 0
 *
 */
int main(void)
{
	int count;
	unsigned long f = 0, f1 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = f + f1;
		printf("%lu", sum);
		f = f1;
		f1 = sum;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
