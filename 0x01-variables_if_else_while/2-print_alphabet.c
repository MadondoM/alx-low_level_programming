#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int m;

	for (m = 0; m < 26; m++)
	{
		putchar(alp[m]);
	}
	putchar('\n');
	return (0);
}
