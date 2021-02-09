#include "holberton.h"
/**
 *main: entry point
 *description: print 9 timestable
 *return: the values
 */

void times_table(void)
{
	int x, y, product;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
			{
				_putchar('0');
			}
			else if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if ((product < 10) && (y != 0))
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
