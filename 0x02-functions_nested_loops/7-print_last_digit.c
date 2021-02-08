#include "holberton.h"

/**
 *main: entry point
 *description: print the last digit of a number
 *return : the digit
 */

int print_last_digit(int num)
{
	return (num % 10);
}

int main(void)
{
	int r;

	r = print_last_digit(98);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
