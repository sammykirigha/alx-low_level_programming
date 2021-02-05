#include<stdio.h>

/**
 *main: entry point
 *description a program that prints lowercase then uppercase
 *return 0
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
