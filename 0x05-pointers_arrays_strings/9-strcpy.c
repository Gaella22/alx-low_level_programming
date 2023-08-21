#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int l;
	int x;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}
	for (x = 0 ; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
