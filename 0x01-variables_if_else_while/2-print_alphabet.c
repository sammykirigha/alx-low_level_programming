#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *main: entry point
 *description: a program that prints alphabets to lowercase
 *return 0 at the end
 */

void main(void)
{
  for (int c = 97; c <= 122; c++)
    putchar("%c", c);
  putchar("\n");
}
