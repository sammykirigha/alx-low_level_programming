#include "holberton.h"

/**
 *main: entry point
 *description: check if a char is letter, lowercase or uppercase
 *return:1 if its true
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	_isalpha('b');
		return (0);
}
