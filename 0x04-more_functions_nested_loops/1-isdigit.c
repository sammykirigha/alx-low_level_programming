#include "holberton.h"
#include <stdio.h>
#include <ctype.h>
/**
 *main: entry point
 *description: check if is digit
 *return: 1 if its true
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int main(void)
{
	_isdigit(8);
	return (0);
}
