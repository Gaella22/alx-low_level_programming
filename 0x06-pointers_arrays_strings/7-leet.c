#include "main.h"

/**
 * leet - encodes a string in 1337
 * @ : string
 * Return: string;
 */
char *leet(char *)
{
	int x, y;
	char *w;

	char *alp1 = "aAeEoOtTlL";
	char *alp2 = "4433007711";

	for (x = 0; w[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (w[x] == alp1[y])
			{
				w[x] = alp2[y];
			}
		}
	}

	return (w);
}
