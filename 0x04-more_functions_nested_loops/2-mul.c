#include "holberton.h"
#include <stdio.h>

/**
 *main: entry point
 *description: multiplys integers
 *return: the value
 */

int mul(int a, int b)
{
	int res;
	res = a * b;
	return res;
}

int main(void)
{
	mul(34, 2);
	return (0);
}
