#include "holberton.h"
#include <stdio.h>

/**
 *main: entry point
 *description: print ints from 0 to 9 except 2 and 4
 *return : the numbers
 */

void print_most_numbers(void)
{
	int n;
	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}

