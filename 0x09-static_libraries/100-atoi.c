#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: int converted from the string
*/
int _atoi(char *s)
{
	int a, b, m, l, e, d;

	a = 0;
	b = 0;
	m = 0;
	l = 0;
	e = 0;
	d = 0;

	while (s[l] != '\0')
		l++;
	while (a < l && e == 0)
	{
		if (s[a] == '-')
			b++;
		if (s[a] >= '0' && s[a] <= '9')
		{
			d = s[a] - '0';
			if (b % 2)
				d = -d;
			m = m * 10 + d;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);
	return (m);
}
