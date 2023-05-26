#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @m: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int m)
{
	if (m >= '0' && m <= '9')
		return (1);
	else
		return (0);
}
