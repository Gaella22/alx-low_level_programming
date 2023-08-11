#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Entry point
  *Description: The last digit of a number
  *Return: always 0
*/
int main(void)
{
	int n;
	int lastnbr;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnbr = n % 10;
	if (lastnbr > 5)
	{
		printf("Last digit of %d is %d and is great than 5", n, lastnbr);
	}
	else if (lastnbr == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastnbr);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6 and not 0", n, lastnbr);
	}
	return (0);
}
