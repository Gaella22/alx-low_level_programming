#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @w: string to be encoded
 *
 * Return: string
 */
char *rot13(char *w)
{
	int x, y;

	char alph1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alph2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; w[x] != '\0'; x++)
	{
		for (y = 0; alph1[y] != '\0'; y++)
		{
			if (w[x] == alph1[y])
			{
				w[x] = alph2[y];
				break;
			}
		}
	}

	return (w);
}
