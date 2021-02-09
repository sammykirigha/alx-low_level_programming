#include "holberton.h"
#include <stdio.h>
/**
 *main: entry point
 *description: adds two numbers
 *return: the results
 */

int add(int x, int y)
{
	int res;
	res = x + y;
	return res;
}

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
