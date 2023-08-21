#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: length
*/
void puts_half(char *str)
{
	int l, m, a;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		for (a = l / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	else if (l % 2)
	{
		for (m = (l - 1) / 2; m < l - 1; m++)
		{
			_putchar(str[m + 1]);
		}
	}
	_putchar('\n');
}
