#include "holberton.h"

/**
 *main: entry point
 *description: prints a line
 *return: 0
 */

void print_line(int n)
{

	int i;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++ )
		{
			_putchar('_');
		}
	}
}
