#include <stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *main: entry point
 *description: a program that prints alphabets to lowercase
 *return 0 at the end
 */

int main(void)
{
  char letter = 'a';
  
  while (letter <= 'z')
  {
     putchar(letter);
     letter++;
  }
  putchar('\n');
  return (0);
}