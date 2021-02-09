#include "holberton.h"
#include <stdio.h>
/**
 *main: entry point
 *description: print all natural naumbers from n to 98
 *return: all the numbers
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if( n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if(n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if(n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	_putchar('\n');

}
