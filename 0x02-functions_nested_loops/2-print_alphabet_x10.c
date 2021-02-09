#include "holberton.h"

/**
 *main: entry point
 *description: prints alphabets 10times
 *return: 0;
 */

void print_alphabet_x10()
{
	char i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
