#include "holberton.h"
#include <stdio.h>

/**
 *main: entry point
 *description: check if the character is upper
 *return 1 if its true
 */

int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
