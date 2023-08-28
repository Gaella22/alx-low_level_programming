#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, z, z1;

	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		z1 = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[y] == accept[y])
			{
				z++;
				z1 = 1;
			}
		}
		if (z1 == 0)
		{
			return (z);
		}
	}

	return (0);
}
