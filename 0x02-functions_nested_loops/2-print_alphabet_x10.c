#include "main.h"
/**
 *print_alphabet_x10 - print the alphabet 10 times
 *
 *Return: always 0
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 1; i <= 10; i++)
	{
		for (y = 97; y <= 122; y++)
		{
			_puchar(y);
		}
		_putchar('\n');
	}
}
