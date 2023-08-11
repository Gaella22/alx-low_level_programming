#include <stdio.h>
/**
  *main - Entry point
  *Description: Alphabet in reverse
  *Return: Always 0
  */
int main(void)
{
	int nbr = 122;

	while (nbr >= 97)
	{
		putchar(nbr);
		nbr--;
	}
	putchar('\n');
	return (0);
}
