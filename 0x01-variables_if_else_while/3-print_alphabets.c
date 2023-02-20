#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints alphabets in lowercase then uppercase
 * Return: 0 (success)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(n);
		m++;
	}
	putchar('\n');
	return (0);
}
