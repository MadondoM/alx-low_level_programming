#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
	}
	putchar ('\n');
	return (0);
}