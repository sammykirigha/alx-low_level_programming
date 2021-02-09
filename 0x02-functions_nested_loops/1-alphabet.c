#include "holberton.h"

/**
 *main: entry point
 *Description- print lowercase alphabets
 *return: all lowercase letters
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}

