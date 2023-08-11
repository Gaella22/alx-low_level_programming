#include <stdio.h>
/**
  *main - Entry point
  *Description: Numbers
  *Return: Always 0
  */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
	{
		putchar(nbr + 48);
	}
	putchar('\n');
	return (0);
}
