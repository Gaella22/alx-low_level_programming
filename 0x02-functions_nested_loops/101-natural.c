#include "main.h"
/**
 * main - Entry point
 *
 * Description: Sum
 * Return: always 0
 *
 */
int main(void)
{
	int nbr, sum;

	for (nbr = 0; nbr < 1024; nbr++)
	{
		if ((nbr % 3 == 0) || (nbr % 5 == 0))
			sum += sum;
	}
	printf("%d\n", sum);

	return (0);
}
