#include "main.h"

/**
 * rev_string - reverse array
 * @nbr: integer
 * Return: 0
 */

void rev_string(char *nbr)
{
	int x = 0;
	int y = 0;
	char c;

	while (*(nbr + x) != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y < x; y++, x--)
	{
		c = *(nbr + y);
		*(nbr + y) = *(nbr + x);
		*(nbr + x) = c;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: first number
 * @n2: second number
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int o = 0, x = 0, y = 0, d = 0;
	int v1 = 0, v2 = 0, t = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || o == 1)
	{
		if (x < 0)
			v1 = 0;
		else
			v1 = *(n1 + x) - '0';
		if (y < 0)
			v2 = 0;
		else
			v2 = *(n2 + y) - '0';
		t = v1 + v2 + o;
		if (t >= 10)
			o = 1;
		else
			o = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (t % 10) + '0';
		d++;
		y--;
		x--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
