#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int l;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	l = 0;
	while (src[l] != '\0')
	{
		dest[m] = src[l];
		m++;
		l++;
	}

	dest[m] = '\0';
	return (dest);
}
