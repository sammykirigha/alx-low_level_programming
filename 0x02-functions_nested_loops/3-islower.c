#include "holberton.h"

/**
 *main: entry point
 *description: check is a character is lowercase
 *return: 1 if lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
