#include <unistd.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints lowercase alphabets in return
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
