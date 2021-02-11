#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *main-entry point
 *Description- a program that prints alphabets to lowercase
 *Return- return 0 upon successful
 */

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
