#include <stdio.h>

/**
 *main - entry point
 *Description: a program that prints lowercase then uppercase
 *
 *Return: return 0 upon successful
 */

int main(void)
{
	char chl;
	char chu;

	chl = 'a';
	while (chl <= 'z')
	{
		putchar(chl);
		chl++;
	}
	chu = 'A';
	while (chu <= 'Z')
	{
		putchar(chu);
		chu++;
	}
	putchar('\n');
	return (0);
}
