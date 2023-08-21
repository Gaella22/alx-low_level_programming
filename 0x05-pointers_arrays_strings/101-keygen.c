#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p[100];
	int a, s, m;

	s = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		p[a] = rand() % 78;
		s += (p[a] + '0');
		putchar(p[a] + '0');
		if ((2772 - s) - '0' < 78)
		{
			m = 2772 - s - '0';
			s += m;
			putchar(m + '0');
			break;
		}
	}

	return (0);
}
