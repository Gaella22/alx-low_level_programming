#include <stdio.h>
/**
  *main - Entry point
  *Description: Numbers
  *Return: always 0
  */
int main(void)
{
	int nbr;

	for (nbr = 48; nbr <= 57; nbr++)
	{
		putchar(nbr);
		if (nbr == 57)
		{
			continue;
		}
		putchar(',');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
