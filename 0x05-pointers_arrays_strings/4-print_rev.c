#include "main.h"
/**
 * print_rev - prints  a string
 * @s: string
*/
void print_rev(char *s)
{
	int l = 0;
	int a;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (a = l; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
