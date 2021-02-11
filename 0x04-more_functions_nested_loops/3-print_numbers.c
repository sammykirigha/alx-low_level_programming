#include "holberton.h"
#include <stdio.h>

/**
 *main: entry point
 *description: prints numbers from 0 to 9
 *return :the numbers
 */

void print_numbers(void)
{
	int n;
	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
