#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
