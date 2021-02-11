#include<stdio.h>
/**
 *main: enry point
 *Description: display lowercase letters except q and e
 *Return: return 0 upon successful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
