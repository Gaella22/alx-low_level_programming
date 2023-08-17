#include <stdio.h>
#include <math.h>

/**
* main - largest number
* Return: always 0
*/

int main(void)
{
	long l, ml;
	long nbr = 93948576201844;
	double square = sqrt(nbr);

	for (l = 1; l <= square; l++)
	{
		if (nbr % l == 0)
		{
			ml = nbr / l;
		}
	}
	printf("%ld", ml);
	return (0);
}
