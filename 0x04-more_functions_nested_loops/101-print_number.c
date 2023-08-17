#include "main.h"
/**
 * print_number - integer
 *
 * @n: interger
*/
void print_number(int n)
{
	unsigned int nbr = n;

	if (n < 0)
	{
		_putchar('-');
		nbr = -nbr;
	}
	nbr /= 10;
	if (nbr != 0)
		print_number(nbr);

	_putchar((unsigned int) n % 10 + 48);
}
