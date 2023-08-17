#include <stdio.h>
/**
 * _sqrt - square root
 *
 * @x: number;
 *
 * Return: square root of x
 *
*/
double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;
	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest number
 *
 *
 * @n: number to find
 *
*/
void largest_prime_factor(long int n)
{
	int p, l;

	while (n % 2 == 0)
		n = n / 2;
	for (p = 3; p <= _sqrt(n); p += 2)
	{
		while (n % p == 0)
		{
			n = n / p;
			l = p;
		}
	}
	if (n > 2)
		l = n;
	printf("%d\n", l);
}

/**
 * main - Entry point
 *
 * Return: always 0
*/
int main(void)
{
	largest_prime_factor(353535363637789);
	return (0);
}
