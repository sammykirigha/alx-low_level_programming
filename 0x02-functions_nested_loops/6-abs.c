#include "holberton.h"
#include <stdio.h>
/**
 *main: entry point
 *description: get an absolute value of a number
 *return: the value
 */

int _abs(int num)
{
	if (num < 0)
	{
		return -num;
	}
	else
	{
		return num;
	}
}
