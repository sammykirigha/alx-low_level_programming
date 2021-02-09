#include "holberton.h"

/**
 *main: entry point
 *description: checks if n is a number
 *return: 1, 0, -1 if true
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
