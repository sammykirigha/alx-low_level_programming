#include<stdio.h>
/**
 *main: enry point
 *description: display lowercase letters except q and e
 *return: 0
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
