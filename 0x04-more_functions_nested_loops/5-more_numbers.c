#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int p, q;

	for (p = 1; p <= 10; p++)
	{
		for (q = 0; q <= 14; q++)
		{
			if (q >= 10)
				_putchar('1');
			_putchar (q % 10 + '0');
		}
		_putchar('\n');
	}
}
