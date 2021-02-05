#include<stdio.h>

/**
 *main: entry point
 *description a program that prints lowercase then uppercase
 *return 0
 */

int main(void)
{
  char i;
  char j;

  j = 'a';
  while (j <= 'z');
  {
    putchar(j);
    j++;
      }

  i = 'A';
  while (i <= 'Z');
  {
    putchar(i);
    i++;
  }

  putchar('\n');
  return (0);
}
