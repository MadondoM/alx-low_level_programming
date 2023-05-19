#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int m;

	for (m = 0; m < 52; m++)
	{
		putchar(alph[m]);
	}
	putchar('\n');
	return (0);
}
