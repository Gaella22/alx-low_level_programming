#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer;
 */
void print_number(int n)
{
	unsigned int nbr;

	if (n < 0)
	{
		nbr = -n;
		_putchar('-');
	} else
	{
		nbr = n;
	}

	if (nbr / 10)
		print_number(nbr / 10);

	_putchar((nbr % 10) + '0');
}
