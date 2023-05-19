#include <stdio.h>

/**
 * main - Entry point
 * prints the lowercase alphabet in reverse
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int m;

	for (m = 122; m > 96; m--)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
	}
